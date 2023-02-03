//C program to demonstrate Polynomial addition using arrays in C
#include <stdio.h>
#define MAX 10

void readPoly(int poly[][2], int terms) {
    int i;
    printf("Enter the coefficients and powers:\n");
    for (i = 0; i < terms; i++) {
        scanf("%d%d", &poly[i][0], &poly[i][1]);
    }
}

void displayPoly(int poly[][2], int terms) {
    int i;
    for (i = 0; i < terms; i++) {
        printf("%dx^%d + ", poly[i][0], poly[i][1]);
    }
    printf("0\n");
}

void addPoly(int poly1[][2], int poly2[][2], int result[][2], int terms1, int terms2) {
    int i = 0, j = 0, k = 0;
    while (i < terms1 && j < terms2) {
        if (poly1[i][1] == poly2[j][1]) {
            result[k][0] = poly1[i][0] + poly2[j][0];
            result[k][1] = poly1[i][1];
            i++;
            j++;
            k++;
        } else if (poly1[i][1] > poly2[j][1]) {
            result[k][0] = poly1[i][0];
            result[k][1] = poly1[i][1];
            i++;
            k++;
        } else {
            result[k][0] = poly2[j][0];
            result[k][1] = poly2[j][1];
            j++;
            k++;
        }
    }
    while (i < terms1) {
        result[k][0] = poly1[i][0];
        result[k][1] = poly1[i][1];
        i++;
        k++;
    }
    while (j < terms2) {
        result[k][0] = poly2[j][0];
        result[k][1] = poly2[j][1];
        j++;
        k++;
    }
}

void main() {
    int poly1[MAX][2], poly2[MAX][2], result[MAX][2];
    int terms1, terms2;
    printf("Enter the number of terms in polynomial 1: ");
    scanf("%d", &terms1);
    printf("Enter the polynomial 1:\n");
    readPoly(poly1, terms1);
    printf("Enter the number of terms in polynomial 2: ");
    scanf("%d", &terms2);
    printf("Enter the polynomial 2:\n");
    readPoly(poly2, terms2);
    addPoly(poly1, poly2, result, terms1, terms2);
    printf("The sum of the polynomials is:\n");
    displayPoly(result, terms1 + terms2);
}
