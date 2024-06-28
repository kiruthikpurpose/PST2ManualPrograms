#include <stdio.h>
#include <math.h>
int main() {
    float num1, num2, result;
    int choice;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Select operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Square\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        case 5:
            result = fmod(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 6:
            printf("Square of %.2f: %.2f\n", num1, num1 * num1);
            printf("Square of %.2f: %.2f\n", num2, num2 * num2);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}

