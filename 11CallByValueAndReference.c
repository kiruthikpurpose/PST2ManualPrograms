#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    // Part A: Call by Value
    printf("Enter two integers for call by value: ");
    scanf("%d %d", &num1, &num2);
    printf("Values before swapping (call by value): num1 = %d, num2 = %d\n", num1, num2);
    swapByValue(num1, num2);
    printf("Values after swapping (call by value): num1 = %d, num2 = %d\n", num1, num2);

    // Part B: Call by Reference
    printf("\nEnter two integers for call by reference: ");
    scanf("%d %d", &num1, &num2);
    printf("Values before swapping (call by reference): num1 = %d, num2 = %d\n", num1, num2);
    swapByReference(&num1, &num2);
    printf("Values after swapping (call by reference): num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
