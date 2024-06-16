all:
	emcc -o function_pointer.js function_pointer.cpp -s EXPORTED_FUNCTIONS='["_set_function_pointer", "_call_stored_function"]' -s EXPORTED_RUNTIME_METHODS='["ccall", "cwrap"]' -sALLOW_TABLE_GROWTH=1

