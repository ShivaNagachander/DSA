#include <stdio.h>

void square(int* n);

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    square(&number);

    printf("Square = %d\n", number);

    return 0;
}

void square(int* n) {
    *n = (*n) * (*n);
}

