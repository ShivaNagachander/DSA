#include <stdio.h>
#include <string.h>

// Book structure
struct Book {
    char title[50];
    char author[50];
    int year;
};

int main() {
    struct Book book1, book2;

    // Writing book1 to a binary file
    strcpy(book1.title, "The Great Gatsby");
    strcpy(book1.author, "F. Scott Fitzgerald");
    book1.year = 1925;

    FILE *file = fopen("books.bin", "wb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fwrite(&book1, sizeof(struct Book), 1, file);
    fclose(file);

    // Reading book2 from the binary file
    file = fopen("books.bin", "rb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fread(&book2, sizeof(struct Book), 1, file);
    fclose(file);

    // Printing the details of book2
    printf("Book Details:\n");
    printf("Title: %s\n", book2.title);
    printf("Author: %s\n", book2.author);
    printf("Year: %d\n", book2.year);

    return 0;
}
