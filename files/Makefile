all:
	#emcc main.cpp --preload-file example.txt -o index.html # Pre-loads
	#emcc main.cpp --embed-file example.txt -o index.html # Embeds to binary
	#emcc main.cpp --preload-file example.txt -s ENVIRONMENT=node -o output.js # Works

	em++ -g main.cpp --preload-file example.txt -s ENVIRONMENT=node -o output.js # Works
