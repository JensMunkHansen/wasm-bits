# check_binary_size.cmake

# Check if the file exists
if(NOT EXISTS "${BINARY_FILE_PATH}")
    message(FATAL_ERROR "File not found: ${BINARY_FILE_PATH}")
endif()

# Get the size of the binary file
file(SIZE "${BINARY_FILE_PATH}" BINARY_SIZE)

# Print the binary size
message(STATUS "Binary file size: ${BINARY_SIZE} bytes")

# Check if the size is greater than the maximum allowed size
if(BINARY_SIZE GREATER ${MAX_SIZE_BYTES})
    message(FATAL_ERROR "Binary size exceeds ${MAX_SIZE_BYTES} bytes")
else()
    message(STATUS "Binary size is within the acceptable limit.")
endif()
  
