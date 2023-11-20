#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *top = NULL;

int push(int x) {
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed.\n");
        return 0; // Indicate failure
    }
    newnode->data = x;
    newnode->next = top;
    top = newnode;
    return 1; // Indicate success
}

int pop() {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return -1; // Indicate failure
    } else {
        struct node *newnode = top;
        int poppedValue = newnode->data;
        top = top->next;
        free(newnode);
        return poppedValue;
    }
}

void display() {
    struct node *temp = top;

    if (temp == NULL) {
        printf("Stack is empty.\n");
        return;
    }

    printf("Stack elements:\n");
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    int op, x;

    while (1) {
        printf("Enter 1 to push an element\n");
        printf("Enter 2 to pop an element\n");
        printf("Enter 3 to display the stack\n");
        printf("Enter 4 to exit\n");
        printf("Enter your choice: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("Enter the element: ");
                scanf("%d", &x);
                if (push(x)) {
                    printf("Element pushed successfully.\n");
                } else {
                    printf("Failed to push element.\n");
                }
                break;

            case 2:
                x = pop();
                if (x != -1) {
                    printf("Popped element: %d\n", x);
                }
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice\n");
                break;
        }
    }

    return 0;
}

