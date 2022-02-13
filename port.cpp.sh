#!/bin/bash

echo "EXECUTING $0. { args: [$@]/[$*], count: $# }"

# setup emscripten.
source ./setupEMSCRIPTEN.sh

# compile
emcc -lembind -s STANDALONE_WASM -s WASM_BIGINT -o ./wasm/cpp/index.html ./src/port.cpp

echo "DONE!"
