#include <iostream>
#include <emscripten/bind.h>

class BaseClass {
public:
  BaseClass() = default;
  virtual ~BaseClass() = default;
    virtual void baseMethod() {
        std::cout << "Method from BaseClass" << std::endl;
    }
  void callBaseMethod() {
    BaseClass::baseMethod();
    }
};

class DerivedClass : public BaseClass {
public:
  DerivedClass() = default;
  ~DerivedClass() override = default;
    void baseMethod() override {
        std::cout << "Method overridden in DerivedClass" << std::endl;
    }
};

EMSCRIPTEN_BINDINGS(my_module) {
    emscripten::class_<BaseClass>("BaseClass")
      .constructor<>()      
        .function("baseMethod", &BaseClass::baseMethod)
      .function("callBaseMethod", &BaseClass::callBaseMethod); // Works

    emscripten::class_<DerivedClass, emscripten::base<BaseClass>>("DerivedClass")
      .constructor<>()      
      .function("baseMethod", &DerivedClass::baseMethod)
      .function("trueBaseMethod", emscripten::select_overload<void()>(&BaseClass::baseMethod)); // Not working
}
