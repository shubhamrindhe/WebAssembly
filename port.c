
#define WASM_PORT

#ifdef WASM_PORT
#include<emscripten.h>
#endif

#ifdef WASM_PORT
EMSCRIPTEN_KEEPALIVE
#endif
int sigma(int x, int y) {
    return x + y;
}

#ifdef WASM_PORT
EMSCRIPTEN_KEEPALIVE
#endif
char* mcqueen() {
    return "I AM NEAR NATIVE SPEED!";
} 
