//C Program to Swap two numbers using Pointers
#include<stdio.h>
 
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
void main()
{
    int a, b;
 
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
 
    printf("\nBefore Swapping: a = %d, b = %d", a, b);
 
    swap(&a, &b);
 
    printf("\nAfter Swapping: a = %d, b = %d", a, b);
}
