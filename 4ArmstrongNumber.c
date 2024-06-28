#include <stdio.h>
#include <math.h>
int main() {
    int num, temp, count = 0, result = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        result += pow(digit, count);
        temp /= 10;
    }
    if(num == result){
        printf("%d is an Armstrong number.", num);
    }
    else{
        printf("%d is not an Armstrong number.", num);
    }
    return 0;
}
