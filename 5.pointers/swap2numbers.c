#include <stdio.h>

void swap(int a, int b);
void _swap(int* a, int* b);

int main() {
    int x, y;
    printf("Enter values of x : ");
    scanf("%d", &x);
    printf("Enter values of y : ");
    scanf("%d", &y);

    swap(x, y);
    printf("After calling swap() function, x = %d and y = %d\n", x, y);

    _swap(&x, &y);
    printf("After calling _swap() function, x = %d and y = %d\n", x, y);

    return 0;
}

// call by reference
void _swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// call by value
void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
}
