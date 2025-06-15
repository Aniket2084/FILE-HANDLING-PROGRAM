#include <stdio.h>

int main() {
    FILE *fptr;

    // Writing to file
    fptr = fopen("test.txt", "w");
    char str[100];
    printf("Enter the string to be written = ");
    fgets(str, 100, stdin);
    fputs(str, fptr);
    fclose(fptr);

    // Appending to file
    fptr = fopen("test.txt", "a");
    char append[100];
    printf("Enter the string to be appended = ");
    fgets(append, 100, stdin);
    fputs(append, fptr);
    fclose(fptr);

    // Reading from file
    fptr = fopen("test.txt", "r");
    char read[200];
    int i = 0;
    char ch;
    while ((ch = fgetc(fptr)) != EOF && i < 199) {
        read[i++] = ch;
    }
    read[i] = '\0';
    puts(read);
    fclose(fptr);

    return 0;
}



