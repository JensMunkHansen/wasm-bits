#include <emscripten.h>
#include <emscripten/bind.h>
#include <emscripten/val.h>
#include <functional>

// Global variable to store the JS function
std::function<void()> jsFunction;

// Function to register the JS function
extern "C" EMSCRIPTEN_KEEPALIVE
void registerCallback(emscripten::val func) {
#if 0
  jsFunction = [func]() {
    func();
  };
#else
  int fp = emscripten::val::module_property("addFunction")(func, std::string("v")).as<int>();
  void (*f)() = reinterpret_cast<void (*)()>(fp);
  f(); 
#endif  
}

// Function to call the stored JS function
extern "C" EMSCRIPTEN_KEEPALIVE
void callJSFunction() {
    if (jsFunction) {
        jsFunction();
    }
}

// Binding the functions
EMSCRIPTEN_BINDINGS(my_module) {
    emscripten::function("registerCallback", &registerCallback);
    emscripten::function("callJSFunction", &callJSFunction);
}
