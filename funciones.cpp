//
// Created by utec on 11/10/19.
//

#include "funciones.h"

device dev;

number_t randint(number_t first,
        number_t last) {
    distribution dist(first, last);
    return dist(dev);
}

matrix_t generar_matriz(number_t nrows,
        number_t ncols) {
    return matrix_t(nrows,
            row_t(ncols));
}

void actualizar_matriz(matrix_t& m) {
    for (auto& row: m)
        for (auto& item: row)
            item = randint(1, 20);
}

void imprimir_matriz(matrix_t& m) {
    for (auto& row: m) {
        for (auto& item: row)
            cout << setw(4) << item;
        cout << endl;
    }
}

