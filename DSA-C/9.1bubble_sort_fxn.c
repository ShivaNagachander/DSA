#include<stdio.h>
void bubbleSort(int, int[]);
void swap(int*, int*);
void displayArray(int, int[]);
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Before sorting: ");
    displayArray(n, a);
    bubbleSort(n, a);
    printf("After sorting: ");
    displayArray(n, a);
    return 0;
}
void bubbleSort(int n, int a[]) {
    int i, j, count = 0;
    int swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
                swapped = 1;
            }
        }
        if (!swapped) {
            break;
        }
        count++;
    }
    printf("Total Number of Iterations: %d\n", count);
}
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void displayArray(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
