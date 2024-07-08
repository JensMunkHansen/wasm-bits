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

var rotElement;
var transElement;
// Main function to load and use the WASM module
async function main() {
    try {
        // Load the WASM module
        wasmModule = await loadvtkTransformWasmModule(options);

	let transform0 = new wasmModule.vtkTransform();
	transform0.RotateX(60);
	let transform1 = new wasmModule.vtkTransform();
	transform1.Translate(1,2,3);
	// Concatenate the two transforms
	transform0.Concatenate(transform1);
	let matrix = transform0.GetMatrix();
	rotElement = matrix.GetElement(1,1);
	// The x-coordinate is untouched, so it should be 1.0
	transElement = matrix.GetElement(0,3);

	console.log(transform1.IsA("vtkTransform"));
	const _parent = wasmModule.vtkTransform.prototype;
	console.log(_parent);
    } catch (error) {
        console.error("An error occurred:", error);
    }
}

// Execute the main function
await main();

process.exit((Math.abs(rotElement -0.5) < 0.001) && (transElement == 1.0) ? 0 : 1);





