#include <iostream>
#include "emscripten/bind.h"

class A {
  public:
    int _a;
    A() {
	_a = 2;
    }
    virtual ~A(){};
    virtual void invoke() {
      std::cout << "Hello from Base Class\n";
    }
};

class AWrapper : public emscripten::wrapper<A> {
  public:
  EMSCRIPTEN_WRAPPER(AWrapper);
  void invoke() {
    return call<void>("invoke");
  }
};

EMSCRIPTEN_BINDINGS(A) {
  emscripten::class_<A>("A")
    .allow_subclass<AWrapper>("AWrapper")
    .function("invoke", emscripten::optional_override([](A& self) {
      return self.A::invoke();
    }));
}
