#include <iostream>
#include "funciones.h"


int main() {
    auto m = generar_matriz(4, 5);
    actualizar_matriz(m);
    imprimir_matriz(m);
    return 0;
}