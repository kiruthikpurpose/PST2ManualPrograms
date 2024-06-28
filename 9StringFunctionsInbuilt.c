#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[100];
    int len, i;
    printf("Enter a string: ");
    gets(str1);

    // String length
    printf("Length of the string: %d\n", strlen(str1));

    // String Copy
    strcpy(str2, str1);
    printf("Copied string: %s\n", str2);

    // String Compare
    printf("Enter another string for comparison: ");
    gets(str2);
    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    // String Reverse
    len = strlen(str1);
    printf("Reversed string: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str1[i]);
    }
    printf("\n");

    // String Lower
    printf("String in lowercase: %s\n", strlwr(str1));

    // String Upper
    printf("String in uppercase: %s\n", strupr(str1));

    // String Concatenation
    printf("Enter a string to concatenate with: ");
    gets(result);
    strcat(str1, result);
    printf("Concatenated string: %s\n", str1);

    return 0;
}

