all:
	npm install jsdom canvas
	emcc your_code.c -o your_code.js -s EXPORTED_FUNCTIONS="['_addCanvasesToModule']" -s MODULARIZE=1 -s EXPORT_NAME='createModule'
