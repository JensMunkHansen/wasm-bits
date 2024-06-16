import loadFunctionPointersWasmModule from './main.js';

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
        wasmModule = await loadFunctionPointersWasmModule(options);
    } catch (error) {
        console.error("An error occurred:", error);
    }

    const result = wasmModule.add(2, 3, v => v * 2);
    console.log(result); // 10    
}

// Execute the main function
await main();

process.exit(0)


