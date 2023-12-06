#include <stdio.h>

int size = 0;

void swap(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}

void heapify(int array[], int size, int i) {
    if (size == 1) {
        printf("Single element in the heap");
    } else {
        int smallest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < size && array[left] < array[smallest])
            smallest = left;
        if (right < size && array[right] < array[smallest])
            smallest = right;

        if (smallest != i) {
            swap(&array[i], &array[smallest]);
            heapify(array, size, smallest);
        }
    }
}

void insert(int array[], int newItem) {
    if (size == 0) {
        array[0] = newItem;
        size += 1;
    } else {
        array[size] = newItem;
        size += 1;
        for (int i = size / 2 - 1; i >= 0; i--) {
            heapify(array, size, i);
        }
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i)
        printf("%d ", array[i]);
    printf("\n");
}

int main() {
    int array[10];
    insert(array, 3);
    insert(array, 4);
    insert(array, 9);
    insert(array, 5);
    insert(array, 2);

    printf("Min-Heap array: ");
    printArray(array, size);

    return 0;
}
