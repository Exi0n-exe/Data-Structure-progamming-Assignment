//Program to perform addition and subtraction of Matrices
#include <stdio.h>

void readMatrix(int arr[3][3]) {
    int i, j;
    printf("Enter the elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void printMatrix(int arr[3][3]) {
    int i, j;
    printf("The matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int arr1[3][3], int arr2[3][3], int result[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void subtractMatrices(int arr1[3][3], int arr2[3][3], int result[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
}

void main() 
{
    int arr1[3][3], arr2[3][3], result[3][3];

    printf("Enter the first matrix:\n");
    readMatrix(arr1);

    printf("Enter the second matrix:\n");
    readMatrix(arr2);

    addMatrices(arr1, arr2, result);
    printf("The result of adding the matrices is:\n");
    printMatrix(result);

    subtractMatrices(arr1, arr2, result);
    printf("The result of subtracting the matrices is:\n");
    printMatrix(result);

}
