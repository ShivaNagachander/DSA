#include <stdio.h>
#define MAX_SIZE 100

// Stack implementation
int stack[MAX_SIZE];
int top = -1;

// Function to push an element onto the stack
void push(int value) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = value;
}

// Function to pop an element from the stack
int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int main() {
    int n;

    // Input: Number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    // Push elements onto the stack
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        push(num);
    }

    // Display elements in reverse order by popping from the stack
    printf("Numbers in reverse order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", pop());
    }

    return 0;
}
