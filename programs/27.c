//Write a program in C to find transpose of a given matrix
#include <stdio.h>

void transpose(int a[3][3]) {
    int trans[3][3];
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            trans[j][i] = a[i][j];
        }
    }
    printf("Transpose of the matrix is: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }
}

void main() {
    int a[3][3], i, j;
    printf("Enter the elements of the matrix: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    transpose(a);
}