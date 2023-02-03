//Write a C program to compute the sum of the two given integer values. If the two values are the same, then return triples their sum.
#include <stdio.h>

int sum(int a, int b) 
{
    int result = a + b;
    if (a == b) {
        result *= 3;
    }
    return result;
}

void main() 
{
    int a, b;

    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    int result = sum(a, b);

    printf("The result is: %d\n", result);
}
