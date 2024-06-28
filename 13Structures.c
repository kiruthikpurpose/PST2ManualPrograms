#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks[3];
};

int main() {
    struct Student s;

    // Input roll number, name, and marks for three subjects
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter Marks for three subjects:\n");
    for (int i = 0; i < 3; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &s.marks[i]);
    }

    // Display the details of the student
    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Marks in three subjects:\n");
    for (int i = 0; i < 3; i++) {
        printf("Subject %d: %.2f\n", i + 1, s.marks[i]);
    }
    return 0;
}

