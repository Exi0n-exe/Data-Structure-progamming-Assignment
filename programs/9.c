//Program for Dynamic Memory Allocation using malloc()
#include <stdio.h>
#include <stdlib.h>

void main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        exit(0);
    }

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("The elements of the array are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);

}
