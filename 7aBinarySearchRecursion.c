#include <stdio.h>

int binarySearchRecursion(int arr[], int start, int end, int key) {
    if (start > end) {
        return -1;
    }
    int mid = (start + end) / 2;

    if (arr[mid] == key) {
        return mid;
    }
    else if (arr[mid] > key) {
        return binarySearchRecursion(arr, start, mid - 1, key);
    }
    else {
        return binarySearchRecursion(arr, mid + 1, end, key);
    }
}

int main() {
    int n, key, result;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    result = binarySearchRecursion(arr, 0, n - 1, key);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    }
    else {
        printf("Element not found\n");
    }
    return 0;
}

