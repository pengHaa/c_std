#ifndef MATRIX_H_
#define MATRIX_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>

// #define MATRIX_LOGGING_ENABLE 

// structure for Matrix 
typedef struct Matrix {
    size_t rows;
    size_t cols;
    double* data;
} Matrix;

Matrix* matrix_create(size_t rows, size_t cols);
Matrix* matrix_add(const Matrix* matrix1, const Matrix* matrix2);
Matrix* matrix_subtract(const Matrix* matrix1, const Matrix* matrix2);
Matrix* matrix_multiply(const Matrix* matrix1, const Matrix* matrix2);

void matrix_deallocate(Matrix* matrix);
void matrix_print(Matrix* matrix);

bool matrix_scalar_multiply(Matrix* matrix, double scalar);
bool matrix_set(Matrix* matrix, size_t rows, size_t cols, double value);
bool matrix_is_square(const Matrix* matrix);

double matrix_get(Matrix* matrix, size_t row, size_t col);

#endif 