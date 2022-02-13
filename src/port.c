
#include "xhu_port.c"

int sum(int x, int y)
{
    return x + y;
}

#ifdef _XHU_WASM_PORT_
EMSCRIPTEN_KEEPALIVE
#endif
int sigma(int x, int y)
{
    return sum(x, y);
}

#ifdef _XHU_WASM_PORT_
EMSCRIPTEN_KEEPALIVE
#endif
char *mcqueen()
{
    return "I AM NEAR NATIVE SPEED!";
}

int main() {
    return 0;
}
