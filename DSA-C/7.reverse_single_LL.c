#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void swap(struct node*, struct node*);
void sortLinkedList(struct node*);
void insert(struct node**, int);
void display(struct node*);

int main() {
    struct node* head = NULL;
    int n, value;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        insert(&head, value);
    }
    printf("Before sorting:\n");
    display(head);
    sortLinkedList(head);
    printf("After sorting in ascending order:\n");
    display(head);
    return 0;
}
void swap(struct node* a, struct node* b) {
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}
void sortLinkedList(struct node* head) {
    int swapped, i;
    struct node* ptr;
    struct node* ptr1 = NULL;
    if (head == NULL)
     return;
    do {
        swapped = 0;
        ptr = head;
        while (ptr->next != ptr1) {
            if (ptr->data > ptr->next->data) {
                swap(ptr, ptr->next);
                swapped = 1;
            }
            ptr = ptr->next;
        }
        ptr1 = ptr;
    } while (swapped);
}

void insert(struct node** head, int value) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } 
    else {
        struct node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void display(struct node* head) {
    if (head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    struct node* temp = head;
    printf("Linked list elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
