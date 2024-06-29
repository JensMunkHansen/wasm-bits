if (typeof window === 'undefined') {
    // Node.js environment
    const { JSDOM } = require('jsdom');
    const { createCanvas } = require('canvas');

    const { window } = new JSDOM('<!DOCTYPE html><html><body></body></html>');
    global.document = window.document;

    global.document.createElement = (type) => {
        if (type === 'canvas') {
            return createCanvas(800, 600);
        }
        return document.createElement(type);
    };

    const createModule = require('./your_code.js');

    createModule().then(Module => {
        Module._addCanvasesToModule();
        const canvases = Module.canvases;
        console.log('Canvases added to Module:', canvases);

        const gl1 = canvases[0].getContext('webgl');
        const gl2 = canvases[1].getContext('webgl');

        if (!gl1 || !gl2) {
            console.error('Failed to get WebGL contexts');
            return;
        }

        console.log('WebGL contexts created successfully');

        gl1.clearColor(0.0, 0.0, 0.0, 1.0);
        gl1.clear(gl1.COLOR_BUFFER_BIT);

        gl2.clearColor(0.2, 0.2, 0.2, 1.0);
        gl2.clear(gl2.COLOR_BUFFER_BIT);
    }).catch(error => {
        console.error('Error initializing module:', error);
    });
} else {
    // Browser environment
    //const createModule = require('./your_code.js');

    createModule().then(Module => {
        Module._addCanvasesToModule();
        const canvases = Module.canvases;
        console.log('Canvases added to Module:', canvases);

        const gl1 = canvases[0].getContext('webgl');
        const gl2 = canvases[1].getContext('webgl');

        if (!gl1 || !gl2) {
            console.error('Failed to get WebGL contexts');
            return;
        }

        console.log('WebGL contexts created successfully');

        gl1.clearColor(0.0, 0.0, 0.0, 1.0);
        gl1.clear(gl1.COLOR_BUFFER_BIT);

        gl2.clearColor(0.2, 0.2, 0.2, 1.0);
        gl2.clear(gl2.COLOR_BUFFER_BIT);
    }).catch(error => {
        console.error('Error initializing module:', error);
    });
}
