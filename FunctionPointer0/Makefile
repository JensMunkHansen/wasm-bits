all:
	emcc callback_example.cpp -o output.js -sMODULARIZE=1 -sEXPORT_ES6=1 -sEXPORTED_RUNTIME_METHODS='["ccall", "cwrap"]' --bind  -sALLOW_TABLE_GROWTH=1
