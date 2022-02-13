
#include "class.cpp"
#include "xhu_port.cpp"

#ifdef _XHU_WASM_PORT_HPP_
using namespace emscripten;
#endif 

int main() {
    std::cout << "Hello World";
    return 0;
}

#ifdef _XHU_WASM_PORT_HPP_
EMSCRIPTEN_BINDINGS(my_class_example) {
    EMSCRIPTEN_EXPORT_CLASS<MyClass>("MyClass")
        .constructor<int, std::string>()
        .function("incrementX", &MyClass::incrementX)
        .property("x", &MyClass::getX, &MyClass::setX)
        .class_function("getStringFromInstance", &MyClass::getStringFromInstance);
}
#endif
