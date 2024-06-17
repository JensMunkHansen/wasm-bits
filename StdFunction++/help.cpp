#include <iostream>

// Function to convert emscripten::val to std::function
std::function<int(int, int)> convertToStdFunction(emscripten::val jsFunc) {
    return [jsFunc](int a, int b) -> int {
        // Call the JavaScript function with the provided arguments and convert the result back to an integer
        return jsFunc(a, b).as<int>();
    };
}

// Get the JavaScript function 'add'
emscripten::val jsAddFunction = emscripten::val::global("add");

// Convert the JavaScript function to a C++ std::function
std::function<int(int, int)> cppAddFunction = convertToStdFunction(jsAddFunction);

// Use the C++ std::function
int result = cppAddFunction(5, 3);
std::cout << "Result of add(5, 3) is: " << result << std::endl;
