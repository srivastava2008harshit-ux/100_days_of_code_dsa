#include <stdio.h>
#define MAX 100
void addMatrices(int m, int n, int matrixA[MAX][MAX], int matrixB[MAX][MAX], int result[MAX][MAX]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
}
int main() {
    int m, n;
    int matrixA[MAX][MAX], matrixB[MAX][MAX], result[MAX][MAX];

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    addMatrices(m, n, matrixA, matrixB, result);

    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}