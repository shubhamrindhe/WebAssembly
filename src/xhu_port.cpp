
/*
    https://emscripten.org/docs/porting/connecting_cpp_and_javascript/embind.html
    https://stackoverflow.com/questions/15865923/interaction-with-c-classes-in-emscripten
    https://emscripten.org/docs/porting/connecting_cpp_and_javascript/embind.html
*/

#define _XHU_WASM_PORT_HPP_

#ifdef _XHU_WASM_PORT_HPP_

#include <emscripten.h>
#include <emscripten/bind.h>

template<typename T>
using EMSCRIPTEN_EXPORT_CLASS = emscripten::class_<T>;

#endif
