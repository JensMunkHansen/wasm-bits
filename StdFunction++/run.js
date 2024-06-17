import loadStdFunctionWasmModule from './callback_example.js';

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
    var jsCallbackFuncPtr = wasmModule.addFunction(jsFunction, 'v');

    // Register the JavaScript function
    wasmModule.registerCallback(jsCallbackFuncPtr);

    // Call the JavaScript function from C++
    wasmModule.callJSFunction();
    console.log("Finished");
}

// Execute the main function
await main();

process.exit(0)


