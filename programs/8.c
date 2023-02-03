//C Program to find the largest Element in an Array using Recursion
#include <stdio.h>

int findLargest(int arr[], int n, int i) {
    int max;
    if (i == n-1) {
        return arr[i];
    }
    max = findLargest(arr, n, i+1);
    if (arr[i] > max) {
        return arr[i];
    } else {
        return max;
    }
}

void main() {
    int n, i;
    int arr[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = findLargest(arr, n, 0);
    printf("The largest element in the array is %d\n", largest);

}
