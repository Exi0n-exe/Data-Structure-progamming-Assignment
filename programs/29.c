//Write a program in C to create a singly linked list of n nodes and display it in reverse order
#include <stdio.h>

void findPairWithDifference(int arr[], int n, int x) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[j] - arr[i] == x) {
                printf("Pair with given difference found: (%d, %d)\n", arr[i], arr[j]);
                return;
            }
        }
    }
    printf("Pair with given difference not found\n");
}

void main() {
    int n, x;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the difference: ");
    scanf("%d", &x);

    findPairWithDifference(arr, n, x);

}
