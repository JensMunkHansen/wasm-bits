#include <iostream>
#include "emscripten/bind.h"

class SecretData {
public:
  SecretData() : _kkk(42) {}
  SecretData(int kkk) : _kkk(kkk) {}
  int _kkk;
};

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
  virtual void invokeWithArg(SecretData* data) {
    std::cout << "Base value is" << data->_kkk << std::endl;
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
    }))
  .function("invokeWithArg", emscripten::optional_override([](A& self, SecretData* arg) {
      return self.A::invokeWithArg(arg);
  }), emscripten::allow_raw_pointers());
  emscripten::class_<SecretData>("SecretData")
    .constructor()
    .constructor<int>();
}
