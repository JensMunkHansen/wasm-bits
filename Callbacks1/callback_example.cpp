#include <emscripten.h>
#include <emscripten/val.h>
#include <functional>

// Global variable to store the JS function
std::function<void()> jsFunction;

// Function to register the JS function
extern "C" EMSCRIPTEN_KEEPALIVE
void registerCallback(emscripten::val func) {
    jsFunction = [func]() {
        func();
    };
}

// Function to call the stored JS function
extern "C" EMSCRIPTEN_KEEPALIVE
void callJSFunction() {
    if (jsFunction) {
        jsFunction();
    }
}
