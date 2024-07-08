#!/bin/bash

(
    rm -Rf build
    source "$HOME/github/emsdk/emsdk_env.sh"
    emcmake cmake -S. -Bbuild 
    cmake --build build --target main
)
