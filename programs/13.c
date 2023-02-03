//C program for Factorial, GCD &amp; Ackerman&#39;s function ( Using Switch case)
#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    }
    if (n == 0) {
        return ackermann(m - 1, 1);
    }
    return ackermann(m - 1, ackermann(m, n - 1));
}

void main() {
    int choice, a, b, result;

    printf("Enter 1 for Factorial\n");
    printf("Enter 2 for GCD\n");
    printf("Enter 3 for Ackermann's function\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a number to find its factorial: ");
            scanf("%d", &a);
            result = factorial(a);
            printf("The factorial of %d is %d\n", a, result);
            break;
        case 2:
            printf("Enter two numbers to find their GCD: ");
            scanf("%d%d", &a, &b);
            result = gcd(a, b);
            printf("The GCD of %d and %d is %d\n", a, b, result);
            break;
        case 3:
            printf("Enter two numbers for Ackermann's function: ");
            scanf("%d%d", &a, &b);
            result = ackermann(a, b);
            printf("The result of Ackermann's function with parameters %d and %d is %d\n", a, b, result);
            break;
        default:
            printf("Invalid choice\n");
    }
}
