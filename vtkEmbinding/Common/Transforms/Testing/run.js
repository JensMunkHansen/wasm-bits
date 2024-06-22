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

var testElement;
// Main function to load and use the WASM module
async function main() {
    try {
        // Load the WASM module
        wasmModule = await loadvtkTransformWasmModule(options);

	let transform = new wasmModule.vtkTransform();
	transform.RotateX(60);
	let matrix = transform.GetMatrix();
	// Rotate 60 degrees, element should be 0.5.
	testElement = matrix.GetElement(1,1);
	console.log(testElement);
    } catch (error) {
        console.error("An error occurred:", error);
    }
}

// Execute the main function
await main();

process.exit(Math.abs(testElement -0.5) < 0.001 ? 0 : 1);





