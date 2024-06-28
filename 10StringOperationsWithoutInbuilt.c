#include <stdio.h>

int main() {
    char str1[100], str2[100], result[100];
    int len1 = 0, len2 = 0, i = 0, j = 0;
    printf("Enter a string: ");
    gets(str1);

    // String length
    while (str1[len1] != '\0') {
        len1++;
    }
    printf("Length of the string: %d\n", len1);

    // String Copy
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    printf("Copied string: %s\n", str2);

    // String Compare
    printf("Enter another string for comparison: ");
    gets(str2);
    while (str1[j] != '\0' && str2[j] != '\0' && str1[j] == str2[j]) {
        j++;
    }
    if (str1[j] == '\0' && str2[j] == '\0') {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    // String Reverse
    len1--;
    while (i < len1) {
        char temp = str1[i];
        str1[i] = str1[len1];
        str1[len1] = temp;
        i++;
        len1--;
    }
    printf("Reversed string: %s\n", str1);

    // String Lower
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'A' && str1[i] <= 'Z') {
            str1[i] += 32;
        }
    }
    printf("String in lowercase: %s\n", str1);

    // String Upper
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            str1[i] -= 32;
        }
    }
    printf("String in uppercase: %s\n", str1);

    // String Concatenation
    printf("Enter a string to concatenate with: ");
    gets(result);
    i = 0;
    while (str1[i] != '\0') {
        i++;
    }
    j = 0;
    while (result[j] != '\0') {
        str1[i] = result[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    printf("Concatenated string: %s\n", str1);

    return 0;
}

