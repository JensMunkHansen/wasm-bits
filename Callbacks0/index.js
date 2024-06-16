<!DOCTYPE html>
<html>
<head>
    <title>Emscripten Callback Example</title>
    <script src="callback_example.js"></script>
</head>
<body>
    <script>
        // Load the compiled WebAssembly module
        var Module = {
            onRuntimeInitialized: function() {
                // Define the JavaScript function to be passed
                function jsCallback() {
                    console.log("JavaScript function called from C++!");
                }

                // Get the compiled functions
                var registerCallback = Module.cwrap('registerCallback', 'void', ['number']);
                var callJSFunction = Module.cwrap('callJSFunction', 'void', []);

                // Wrap the JavaScript function as a WebAssembly function
                var jsCallbackFuncPtr = Module.addFunction(jsCallback, 'v');

                // Register the JavaScript function
                registerCallback(jsCallbackFuncPtr);

                // Call the JavaScript function from C++
                callJSFunction();
            }
        };
    </script>
</body>
</html>
