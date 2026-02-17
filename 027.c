#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int matrix[n][n];

   
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isIdentity = 1; 

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (i == j && matrix[i][j] != 1) {
                isIdentity = 0; 
                break;
            } else if (i != j && matrix[i][j] != 0) {
                isIdentity = 0; 
                break;
            }
        }
        if (!isIdentity) {
            break;
        }
    }

    if (isIdentity) {
        printf("The given matrix is an Identity Matrix.\n");
    } else {
        printf("The given matrix is not an Identity Matrix.\n");
    }

    return 0;
}