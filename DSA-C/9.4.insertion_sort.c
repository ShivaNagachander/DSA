#include <stdio.h>
void insertion_sort(int[], int);
int main() {
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  int a[n];
  printf("Enter the elements: \n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  printf("inputed Array: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  insertion_sort(a, n);
  printf("\nsorted array: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  return 0;
}
void insertion_sort(int a[], int n) {
  int i, j, temp;
  for (i = 1; i < n; i++) {
    temp = a[i];
    j = i;
    while (j > 0 && a[j - 1] > temp) {
      a[j] = a[j - 1];
      j = j - 1;
    }
    a[j] = temp;
  }
}
