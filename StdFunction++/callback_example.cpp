#include <emscripten/bind.h>
#include <functional>

// Global variable to store the JS function
std::function<void()> jsFunction;

//extern "C" {

std::function<void()> convertToStdFunction(emscripten::val jsFunc) {
  return [jsFunc]() -> int {
    return jsFunc().as<int>();
  };
}


// Function to register the JS function
void EMSCRIPTEN_KEEPALIVE registerCallback(emscripten::val func) {
#if 0
    jsFunction = [func]() {
        func();
    };
#else
    jsFunction = convertToStdFunction(func);
#endif
}

// Function to call the stored JS function
void EMSCRIPTEN_KEEPALIVE callJSFunction() {
    if (jsFunction) {
        jsFunction();
    }
}
//}

// Binding the functions
EMSCRIPTEN_BINDINGS(my_module) {
    emscripten::function("registerCallback", &registerCallback);
    emscripten::function("callJSFunction", &callJSFunction);
}
