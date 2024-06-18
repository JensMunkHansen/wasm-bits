// run.js

// Import the function from wasmLoader.js
import { setFlagsFromString } from 'v8';
import { runInNewContext } from 'vm';

// Import the function from wasmLoader.js
import loadvtkCallbackCommandWasmModule from './main.js';

console.log(loadvtkCallbackCommandWasmModule);

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
        wasmModule = await loadvtkCallbackCommandWasmModule(options);
        console.log("Loaded vtkCallbackCommand wasm");

        // Create an instance of the module object
        const caller = new wasmModule.vtkCallerObject();

        const callee = new wasmModule.vtkCalleeObject();

	// Would be cool if we could inherit
	let myCallback = new wasmModule.vtkCallbackCommand();

	// TODO: Wrap also vtkCommand
	myCallback.SetCallback((caller, evId, clientData, callData) => {
	    console.debug(`myCallback => vtkObject*:${caller}, eventId:${wasmModule.vtkCommand.GetStringFromEventId(evId)},
clientData:${clientData}, callData:${callData}`);
	    // let realObject = wasmModule.vtkObject.SafeDownCast();
	    // TODO: Make C++ function which do reinterpret_cast
	});
	caller.AddObserver('InteractionEvent', myCallback, 0.0);
	caller.TestInvokeEvent();    

    } catch (error) {
        console.error("An error occurred:", error);
    }
}

// Execute the main function
await main();


