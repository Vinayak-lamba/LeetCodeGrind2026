#include <stdio.h>

void transposeMatrix(int m, int n, int matrix[m][n], int transpose[n][m]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int m, n;

    scanf("%d %d", &m, &n);

    int matrix[m][n];
    int transpose[n][m];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    transposeMatrix(m, n, matrix, transpose);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
