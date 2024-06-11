// Import the function from wasmLoader.js
const loadInheritWasmModule = require('./main');

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
        const wasmModule = await loadInheritWasmModule(options);
        console.log("Loaded Inherit wasm");

	const A = wasmModule.A.extend("A", {
            invoke: () => {
		console.log("Hello from JS");
            }
	});
	console.log("Hello");

	const a = new A();
	a.invoke();
    } catch (error) {
        console.error("An error occurred:", error);
    }
}

// Execute the main function
main();

