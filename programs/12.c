//C program to demonstrate Radix sort (LSD technique)
#include <stdio.h>
#include <math.h>

void radixSort(int arr[], int n, int maxDigits) {
    int i, j, k, factor;
    int **bucket = (int**)malloc(10 * sizeof(int*));

    for (i = 0; i < 10; i++) {
        bucket[i] = (int*)malloc(n * sizeof(int));
    }

    for (k = 0; k < maxDigits; k++) {
        int count[10] = { 0 };
        factor = pow(10, k);

        for (i = 0; i < n; i++) {
            count[(arr[i] / factor) % 10]++;
        }

        for (i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }

        for (i = n - 1; i >= 0; i--) {
            j = (arr[i] / factor) % 10;
            bucket[j][--count[j]] = arr[i];
        }

        for (i = 0, j = 0; i < 10; i++) {
            for (k = 0; k < count[i]; k++) {
                arr[j++] = bucket[i][k];
            }
        }
    }

    for (i = 0; i < 10; i++) {
        free(bucket[i]);
    }
    free(bucket);
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void main() {
    int n, i, maxDigits = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        int digits = log10(arr[i]) + 1;
        if (digits > maxDigits) {
            maxDigits = digits;
        }
    }

    printf("Original array: ");
    printArray(arr, n);

    radixSort(arr, n, maxDigits);

    printf("Sorted array: ");
    printArray(arr, n);
}
