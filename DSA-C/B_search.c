#include <stdio.h>
int binarySearch(int [],int ,int);

int main() {
    int a[100], k, n, x;
    printf("Enter the element of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d", &k);

    x = binarySearch(a, k, n);

    if (x == -1) {
        printf("key not found\n");
    } else {
        printf("key found at index %d\n", x);
    }

    return 0;
}

int binarySearch(int a[], int k, int n) {
    int beg = 0;
    int end = n - 1;
    int mid;

    while (beg <= end) {
        mid = (beg + end) / 2;

        if (a[mid] == k) {
            return mid;  // k found at index mid
        } else if (a[mid] < k) {
            beg = mid + 1;  // k is in the right half
        } else {
            end = mid - 1;  // k is in the left half
        }
    }

    return -1;  // k not found
}
