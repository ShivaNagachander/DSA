#include <stdio.h>

#define MAX_HEAP_SIZE 100

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapifyUp(int heap[], int index) {
    int parent = (index - 1) / 2;

    while (index > 0 && heap[index] > heap[parent]) {
        swap(&heap[index], &heap[parent]);
        index = parent;
        parent = (index - 1) / 2;
    }
}

void insertMaxHeap(int heap[], int *size, int value) {
    if (*size >= MAX_HEAP_SIZE) {
        printf("Heap is full. Cannot insert more elements.\n");
        return;
    }

    heap[*size] = value;
    *size = *size + 1;

    heapifyUp(heap, *size - 1);
}

void printHeap(int heap[], int size) {
    printf("Max Heap: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", heap[i]);
    }
    printf("\n");
}

int main() {
    int maxHeap[MAX_HEAP_SIZE];
    int heapSize = 0;
    int element;

    // Insert elements into the max heap
    while (1) {
        printf("Enter element to insert (or -1 to stop): ");
        scanf("%d", &element);

        if (element == -1) {
            break;
        }

        insertMaxHeap(maxHeap, &heapSize, element);
    }

    // Print the max heap
    printHeap(maxHeap, heapSize);

    return 0;
}

