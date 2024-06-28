#include <stdio.h>
#include <conio.h>
int main() {
    char name[50], dob[20], gender[10], address[100], phone[15];
    int age;
    printf("Enter your name: ");
    gets(name);
    printf("Enter your date of birth (DD/MM/YYYY): ");
    scanf("%s", dob);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your gender: ");
    scanf("%s", gender);
    printf("Enter your address: ");
    scanf(" %[^\n]", address);
    printf("Enter your phone number: ");
    scanf("%s", phone);
    printf("\n\n");
    printf("Personal Details\n");
    printf("Name: %s\n", name);
    printf("Date of Birth: %s\n", dob);
    printf("Age: %d\n", age);
    printf("Gender: %s\n", gender);
    printf("Address: %s\n", address);
    printf("Phone Number: %s\n", phone);
    return 0;
}
