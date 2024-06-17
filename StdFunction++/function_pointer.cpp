#include <emscripten.h>
#include <functional>

// Store the function pointer globally
std::function<void()> stored_function;

extern "C" {

// Function to store the function pointer
void EMSCRIPTEN_KEEPALIVE set_function_pointer(void (*func)()) {
    stored_function = func;
}

// Function to call the stored function pointer
void EMSCRIPTEN_KEEPALIVE call_stored_function() {
    if (stored_function) {
        stored_function();
    }
}

}
