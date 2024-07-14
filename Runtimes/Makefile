all:
	# Compile module1.cpp to module1.js and module1.wasm
	emcc module1.cpp -o Module1.js -s EXPORTED_FUNCTIONS='["_add"]' -s MODULARIZE=1 -s EXPORT_NAME="'Module1'" -s EXPORT_ES6=1 -s ENVIRONMENT='web,node'
	# Compile module2.cpp to module2.js and module2.wasm
	emcc module2.cpp -o Module2.js -s EXPORTED_FUNCTIONS='["_multiply"]' -s MODULARIZE=1 -s EXPORT_NAME="'Module2'" -s EXPORT_ES6=1 -s ENVIRONMENT='web,node'
