// callback_example.cpp
#include <emscripten/bind.h>
#include <emscripten/val.h>
#include <iostream>

emscripten::val jsCallback;

void set_js_callback(emscripten::val callback) {
    jsCallback = callback;
}

void trigger_callback(int value) {
    if (!jsCallback.isUndefined() && !jsCallback.isNull()) {
        int result = jsCallback(value).as<int>();
        std::cout << "Result from JavaScript callback: " << result << std::endl;
    } else {
        std::cout << "Callback not set." << std::endl;
    }
}

EMSCRIPTEN_BINDINGS(callback_example) {
    emscripten::function("set_js_callback", &set_js_callback);
    emscripten::function("trigger_callback", &trigger_callback);
}
