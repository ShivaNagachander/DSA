#include <stdio.h>
int L_search(int [],int, int);
int main() {
    int a[100], k, n, x;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the key to search: ");
    scanf("%d", &k);
    x = L_search(a, k, n);
    if (x == -1) {
        printf("\nkey not found\n");
    } else {
        printf("\nkey found at index %d\n", x);
    }
    return 0;
}
int L_search(int a[], int k, int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] == k) {
            return i;  // k found at index i
        }
    }
    return -1;  // k not found
}
