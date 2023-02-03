//Program to find sum of the first n numbers using recursion, where the value of n is provided by the user.
#include <stdio.h>

int findSum(int n) 
{
    if (n == 0) {
        return 0;
    } else {
        return n + findSum(n - 1);
    }
}

void main() 
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = findSum(n);
    printf("The sum of the first %d numbers is %d\n", n, sum);

}
