#include <stdio.h>

void bubbleSort(int, int[]);

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    bubbleSort(n, a);

    return 0;
}

void bubbleSort(int n, int a[]) {
    int iteration_count = 0;
    int condition_check = 0;

    printf("Before bubble sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    int temp;
    for (int i = 0; i < (n - 1); i++) {
        condition_check = 0;
        for (int j = 0; j < (n - i - 1); j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                condition_check++;
            }
        }
        if (condition_check == 0) {
            break;
        }
        iteration_count++;
    }

    printf("After bubble sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Total Number of Iterations: %d\n", iteration_count);
}
