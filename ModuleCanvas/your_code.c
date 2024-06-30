#include <emscripten/emscripten.h>

// Function to add canvases to the Module object
void addCanvasesToModule() {
    EM_ASM({
        // Create the first canvas element
        var canvas1 = document.createElement('canvas');
        canvas1.width = 800;
        canvas1.height = 600;
        document.body.appendChild(canvas1);

        // Create the second canvas element
        var canvas2 = document.createElement('canvas');
        canvas2.width = 800;
        canvas2.height = 600;
        document.body.appendChild(canvas2);

	// Initialize an empty array for canvases
        var canvases = [];
        canvases.push(canvas1);
        canvases.push(canvas2);

	// Bracket notation, Module['canvas smart'] can handle spaces
	
        // Assign the array to Module.canvases
        Module.canvases = canvases;
    });
}
