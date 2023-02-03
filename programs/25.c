//C Program to Find the Largest of three numbers using Pointers
#include <stdio.h>

void findLargest(int *a, int *b, int *c) {
    int max = *a;
    if (*b > max) {
        max = *b;
    }
    if (*c > max) {
        max = *c;
    }
    printf("Largest number is: %d", max);
}

void main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    findLargest(&num1, &num2, &num3);
}
