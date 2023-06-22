#include <stdio.h>
void selectionSort(int [], int);
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Array before sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    selectionSort(a, n);
    printf("\nArray after sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}
void selectionSort(int a[], int n) {
    int i, j, min, temp;
    for (i = 0; i < n-1; i++) {
        min = i;
        for (j = i+1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        if(min!=i){
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
            }
                }
}
