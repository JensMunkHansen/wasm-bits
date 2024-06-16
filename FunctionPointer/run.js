import loadFunctionPointerWasmModule from './main.js';

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
        wasmModule = await loadFunctionPointerWasmModule(options);
    } catch (error) {
        console.error("An error occurred:", error);
    }
    wasmModule.runCallback((num) => {
        console.log("num=", num);
    })
}

// Execute the main function
await main();

process.exit(0)
