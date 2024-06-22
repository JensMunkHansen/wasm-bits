// run.js

// Import the function from wasmLoader.js
import loadvtkTransformWasmModule from './TransformTest.js';

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

// Main function to load and use the WASM module
async function main() {
    try {
        // Load the WASM module
        wasmModule = await loadvtkTransformWasmModule(options);

	let transform = new wasmModule.vtkTransform();
	transform.RotateX(30);
	let matrix = transform.GetMatrix()
    } catch (error) {
        console.error("An error occurred:", error);
    }
}

// Execute the main function
await main();


