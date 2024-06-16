#if 0


// Old one using Makefile


#include <emscripten.h>
#include <emscripten/val.h>
#include <functional>


// Global variable to store the JS function
std::function<void()> jsFunction;

// Function to register the JS function
extern "C" EMSCRIPTEN_KEEPALIVE
void registerCallback(emscripten::val func) {
    // Store the JavaScript function for later use
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
#else

#include <emscripten/bind.h>
#include <functional>

// Global variable to store the JS function
std::function<void()> jsFunction;

// Function to register the JS function
void EMSCRIPTEN_KEEPALIVE registerCallback(emscripten::val func) {
    jsFunction = [func]() {
        func();
    };
}

// Function to call the stored JS function
void EMSCRIPTEN_KEEPALIVE callJSFunction() {
    if (jsFunction) {
        jsFunction();
    }
}

// Binding the functions
EMSCRIPTEN_BINDINGS(my_module) {
    emscripten::function("registerCallback", &registerCallback);
    emscripten::function("callJSFunction", &callJSFunction);
}

#endif
