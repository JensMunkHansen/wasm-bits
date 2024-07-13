#include "emscripten.h"
#include "emscripten/bind.h"
#include <string>

class MyClass {
public:
  MyClass(int x, std::string y)
    : x(x)
    , y(y)
  {}

  void incrementX() {
    ++x;
  }

  int getX() const { return x; }
  void setX(int x_) { x = x_; }

  static std::string getStringFromInstance(const MyClass& instance) {
    return instance.y;
  }

private:
  int x;
  std::string y;
};

// Binding code
EMSCRIPTEN_BINDINGS(my_class_example) {
  emscripten::class_<MyClass>("MyClass")
    .constructor<int, std::string>()
    .function("incrementX", &MyClass::incrementX)
    .property("x", &MyClass::getX, &MyClass::setX)
    .property("x_readonly", &MyClass::getX)
    .class_function("getStringFromInstance", &MyClass::getStringFromInstance)
    ;
}

EMSCRIPTEN_KEEPALIVE
int testMe() {
  EM_ASM(
    //alert('hello world!');
    console.log("Hello");
    var instance = new Module["MyClass"](10, "hello");
    instance["incrementX"]();
    instance["x"]; // 11
    instance["x"] = 20; // 20
    console.log(Module["MyClass"]["getStringFromInstance"](instance)); // "hello"
    
    instance.delete();
  );
  return 2;
}

EMSCRIPTEN_BINDINGS(test_me) {
    emscripten::function("testMe", &testMe);
}
/*
The closure compiler is unaware of the names of symbols that are
exposed to JavaScript via Embind. In order to prevent such symbols
from being renamed by the closure compiler in your own code (provided
for example by using the --pre-js or --post-js compiler flags) it is
necessary to annotate the code accordingly. Without such annotations,
the resulting JavaScript code will no longer match the symbol names
used in the Embind code and runtime errors will occur as a result.

Compile without --closure, no need to rewrite js code.

Code inside blocks,

EM_ASM or EM_JS.

must be rewritten

var instance = new Module["MyClass"](10, "hello");
instance["incrementX"]();
instance["x"]; // 11
instance["x"] = 20; // 20
Module["MyClass"]["getStringFromInstance"](instance); // "hello"
instance.delete();

 */
