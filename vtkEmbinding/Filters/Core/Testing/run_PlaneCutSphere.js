// run.js

// Import the function from wasmLoader.js
import loadFiltersCoreWasmModule from './main.js';

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
var nPoints

// Main function to load and use the WASM module
async function main() {
    try {
        // Load the WASM module
        wasmModule = await loadFiltersCoreWasmModule(options);
	let sphere = new wasmModule.vtkSphereSource();
	sphere.Update();
	let output = sphere.GetOutput();
	console.log(output.GetNumberOfPoints());
	
	let planeCutter = new wasmModule.vtkPlaneCutter();
	let plane = new wasmModule.vtkPlane();
	planeCutter.SetPlane(plane);
	planeCutter.SetInputConnection(sphere.GetOutputPort())
	planeCutter.Update();
	output = planeCutter.GetOutput();
	nPoints = output.GetNumberOfPoints();
	console.log(nPoints);
    } catch (error) {
        console.error("An error occurred:", error);
    }
}

// Execute the main function
await main();

process.exit(nPoints == 16 ? 0 : 1);





