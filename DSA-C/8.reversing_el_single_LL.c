#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* head;
void reverseList();
void insert(int);
void display();
int main() {
    int numElements, element;
    head = NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &numElements);
    printf("Enter elements \n");
    for (int i = 0; i < numElements; i++) {
        scanf("%d", &element);
        insert(element);
    }

    printf("Original ");
    display();

    reverseList();

    printf("Reversed ");
    display();

    return 0;
}


void reverseList() {
    struct Node *prev, *current, *next;
    prev = NULL;
    current = head;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

void insert(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void display() {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
