// run.js

// Import the function from wasmLoader.js
const loadvtkSmartPointerWasmModule = require('./main');

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

// Main function to load and use the WASM module
async function main() {
    try {
        // Load the WASM module
        const wasmModule = await loadvtkSmartPointerWasmModule(options);
        console.log("Loaded vtkSmartPointer wasm");

        // Function to log reference counts
        const logRefCounts = (x) => {
            console.log(`RefCounts JS=${x.$$.count.value}, CPP=${x.GetReferenceCount()}`);
        };

        // Asynchronous function to simulate a long-running process
        async function myLongRunningProcess(x, milliseconds) {
            await new Promise(resolve => setTimeout(resolve, milliseconds));
            logRefCounts(x);
        }

        // Create an instance of the module object
        const instance = new wasmModule.vtkCustomObject();
        logRefCounts(instance); // JS=1, CPP=1

        // Execute the long-running process with different delays
        await myLongRunningProcess(instance.clone(), 500);
        logRefCounts(instance); // JS=2, CPP=1

        await myLongRunningProcess(instance.clone(), 300);
        logRefCounts(instance); // JS=3, CPP=1

    } catch (error) {
        console.error("An error occurred:", error);
    }
}

const registry = new FinalizationRegistry(() => {});

// Execute the main function
main();

new Promise(resolve => setTimeout(resolve, 30000));
