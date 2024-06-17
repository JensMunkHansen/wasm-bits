import loadStdFunctionWasmModule from './function_pointer.js';
// import addFunction from './function_pointer.js';

const options = {
    print: function () {
        const text = Array.prototype.slice.call(arguments).join(' ');
        console.info(text);
    },
    printErr: function () {
        const text = Array.prototype.slice.call(arguments).join(' ');
        console.error(text);
    }
};
var wasmModule

// Main function to load and use the WASM module
async function main() {
    try {
        // Load the WASM module
        wasmModule = await loadStdFunctionWasmModule(options);
    } catch (error) {
        console.error("An error occurred:", error);
    }
    function jsFunction() {
        console.log("JavaScript function called from C++!");
    }

    // Convert the JS function to a function pointer
    var funcPtr = wasmModule.addFunction(jsFunction, 'v');

    // Pass the function pointer to C++
    wasmModule.ccall('set_function_pointer', null, ['number'], [funcPtr]);

    // Later on, call the stored function from C++
    wasmModule.ccall('call_stored_function', null, [], []);
    console.log("Finished");
}

// Execute the main function
await main();

process.exit(0)


