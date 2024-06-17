import loadStdFunctionWasmModule from './output.js';

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
    
    function myCallback(arg) {
        console.log('Callback called with argument:', arg);
        return arg * 2; // Example: return double the argument
    }

    // Pass the JavaScript callback to the C++ code
    wasmModule.set_js_callback(myCallback);
	  
    // Trigger the callback from C++
    wasmModule.trigger_callback(42);	  
    
}

// Execute the main function
await main();

process.exit(0)


