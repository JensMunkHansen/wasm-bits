all:
	emcc callback_example.cpp -o callback_example.js -sMODULARIZE=1 -sALLOW_TABLE_GROWTH=1 -sEXPORT_ES6=1 -sEXPORTED_FUNCTIONS=_registerCallback,_callJSFunction -sEXPORTED_RUNTIME_METHODS=ccall,cwrap,addFunction -O3 --bind
