// run.js

// Import the function from wasmLoader.js
import { setFlagsFromString } from 'v8';
import { runInNewContext } from 'vm';

// Import the function from wasmLoader.js
import loadClosureWasmModule from './main.js';



// Define the options object
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
let nErrors = 0;

// Main function to load and use the WASM module
async function main() {
    try {
        // Load the WASM module
        let wasmModule = await loadClosureWasmModule(options);
	let instance = new wasmModule.MyClass(1, "Hello")
	console.log(instance);
	wasmModule["testMe"]();
    } catch (error) {
        console.error("An error occurred:", error);
	nErrors++;
    }
}

// Execute the main function
await main();


// Can be captured with $?
process.exit(nErrors == 0 ? 0 : 1);
