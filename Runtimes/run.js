import loadModule1 from './Module1.js';
import loadModule2 from './Module2.js';

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
var wasmModule1;
var wasmModule2;
var nErrors = 0;
// Main function to load and use the WASM module
async function main() {
    try {
	const a = 3, b = 4;
    
	wasmModule1 = await loadModule1(options);
	wasmModule2 = await loadModule2(options);
	const sum = wasmModule1._add(a, b);
	console.log(`Result from module1 (add): ${a} + ${b} = ${sum}`);
	const product = wasmModule2._multiply(a, b);
	console.log(`Result from module2 (multiply): ${a} * ${b} = ${product}`);
    } catch (error) {
        console.error("An error occurred:", error);
	nErrors++;
    }
}

// Execute the main function
await main();
