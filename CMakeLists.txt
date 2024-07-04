cmake_minimum_required(VERSION 3.15)
project(Sphere)

enable_testing()

execute_process(COMMAND
  ${CMAKE_CTEST_COMMAND}
    --build-generator
      "${CMAKE_GENERATOR}"
    --build-and-test
      "JSSphere"
      "JSSphere/build"
    --build-options
     -A "${CMAKE_GENERATOR_PLATFORM}"
     -T "${CMAKE_GENERATOR_TOOLSET}"
     -DOPTIMIZE:STRING="SMALLEST"
  RESULT_VARIABLE res)

execute_process(COMMAND
  ${CMAKE_CTEST_COMMAND}
    --build-generator
      "${CMAKE_GENERATOR}"
    --build-and-test
      "JSSphereNative"
      "JSSphereNative/build"
    --build-options
     -A "${CMAKE_GENERATOR_PLATFORM}"
     -T "${CMAKE_GENERATOR_TOOLSET}"
     -DOPTIMIZE:STRING="SMALLEST"
  RESULT_VARIABLE res)

add_test(NAME CheckBinarySize
  COMMAND ${CMAKE_COMMAND} -D "BINARY_FILE_PATH=${CMAKE_CURRENT_SOURCE_DIR}/JSSphere/build/JSSphere.wasm" -D "MAX_SIZE_BYTES=9e6" -P "${CMAKE_SOURCE_DIR}/check_binary_size.cmake"
)  

add_test(NAME CheckBinarySizeNative
  COMMAND ${CMAKE_COMMAND} -D "BINARY_FILE_PATH=${CMAKE_CURRENT_SOURCE_DIR}/JSSphereNative/build/JSSphereNative.wasm" -D "MAX_SIZE_BYTES=8e6" -P "${CMAKE_SOURCE_DIR}/check_binary_size.cmake"
)  
