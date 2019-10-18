//
// Created by utec on 11/10/19.
//

#ifndef MATRIZ_VECTORES_FUNCIONES_H
#define MATRIZ_VECTORES_FUNCIONES_H

#include <random>
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

typedef int number_t;
typedef random_device device;
typedef uniform_int_distribution<number_t>
        distribution;
typedef vector<number_t> row_t;
typedef vector<row_t> matrix_t;

number_t randint(number_t first,
        number_t last);
matrix_t generar_matriz(number_t nrows,
        number_t ncols);
void actualizar_matriz(matrix_t& m);
void imprimir_matriz(matrix_t& m);

#endif //MATRIZ_VECTORES_FUNCIONES_H
