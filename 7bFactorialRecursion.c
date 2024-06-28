#include <stdio.h>

int factorialRecursion(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorialRecursion(n - 1);
    }
}

int main() {
    int num, result;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    result = factorialRecursion(num);

    printf("Factorial of %d is %d\n", num, result);

    return 0;
}

