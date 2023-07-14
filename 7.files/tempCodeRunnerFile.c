#include <stdio.h>

int main() {
    FILE *file = fopen("S2.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    printf("Size of the file: %ld bytes\n", size);

    fseek(file, 0, SEEK_SET);
    int count = 0;
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n')
            count++;
    }
    printf("Number of lines in the file: %d\n", count);

    fseek(file, -5, SEEK_END);
    printf("Last 5 characters of the file: ");
    for (int i = 0; i < 5; i++) {
        ch = fgetc(file);
        if (ch != EOF)
            printf("%c", ch);
    }
    printf("\n");

    fclose(file);
    return 0;
}
