#include <stdio.h>

void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int rowZero = 0, colZero = 0;

    // Check first row
    for (int j = 0; j < matrixColSize[0]; j++) {
        if (matrix[0][j] == 0) {
            rowZero = 1;
            break;
        }
    }

    // Check first column
    for (int i = 0; i < matrixSize; i++) {
        if (matrix[i][0] == 0) {
            colZero = 1;
            break;
        }
    }

    // Use first row & column as markers
    for (int i = 1; i < matrixSize; i++) {
        for (int j = 1; j < matrixColSize[0]; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // Set zeros based on markers
    for (int i = 1; i < matrixSize; i++) {
        for (int j = 1; j < matrixColSize[0]; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    // Zero first row if needed
    if (rowZero) {
        for (int j = 0; j < matrixColSize[0]; j++) {
            matrix[0][j] = 0;
        }
    }

    // Zero first column if needed
    if (colZero) {
        for (int i = 0; i < matrixSize; i++) {
            matrix[i][0] = 0;
        }
    }
}
