#!/bin/bash

echo "EXECUTING $0. { args: [$@]/[$*], count: $# }"

# setup emscripten.
source ./setupEMSCRIPTEN.sh

# compile
emcc ./src/port.c -s WASM=1 -o ./wasm/c/index.html

echo "DONE!"
