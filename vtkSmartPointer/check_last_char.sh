#!/bin/bash

# Check if the correct number of arguments is provided
if [ "$#" -lt 2 ]; then
    echo "Usage: $0 <node_path> <js_file> [args...]"
    exit 1
fi

# Extract the node path and JavaScript file
node_path=$1
js_file=$2
shift 2

# Run node with the provided JavaScript file and arguments
output=$("$node_path" "$js_file" "$@")

echo $output

# Get the last character of the output
last_char="${output: -1}"

# Check if the last character is '0'
if [[ "$last_char" == "0" ]]; then
    exit 0
else
    echo "Test failed. The last character is not '0'."
    exit 1
fi
