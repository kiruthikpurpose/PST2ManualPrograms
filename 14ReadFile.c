#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[100], line[1000];
    printf("Enter the name of the text file: ");
    scanf("%s", filename);

    // Open the text file in read mode
    fptr = fopen(filename, "r");

    // Check if the file opened successfully
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read data from the file and display it on the screen
    printf("\nContents of the file '%s':\n", filename);
    while (fgets(line, sizeof(line), fptr) != NULL) {
        printf("%s\n", line);
    }
    fclose(fptr);
    return 0;
}

