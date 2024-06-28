#include <stdio.h>

int main() {
    int arr[100], *ptr, sum = 0, n;
    float average;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    ptr = arr;
    for (int i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;
    }
    average = (float)sum / n;
    printf("Average of array elements: %.2f\n", average);

    return 0;
}

