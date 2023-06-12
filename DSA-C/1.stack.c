#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

struct stack {
    int list[SIZE];
    int top;
};

void push(struct stack* , int );
int pop(struct stack* );
int peek(struct stack );
void display(struct stack );


int main() {
struct stack s;
s.top = -1; // Initialize the top of the stack to -1
int op, x;
while (1) {
printf("Enter operation (1:push, 2:pop, 3:peek, 4:display, 0:exit): ");
scanf("%d", &op);
switch (op) {
case 1:
    printf("Enter element to push: ");
    scanf("%d", &x);
    push(&s, x);
    break;
case 2:
    x = pop(&s);
    if (x != -1) {
        printf("Popped item: %d\n", x);
    }
    break;
case 3:
    x = peek(s);
    if (x != -1) {
        printf("Top element: %d\n", x);
    }
    break;
case 4:
    display(s);
    break;
case 0:
    return 0;
default:
    printf("Invalid operation.\n");
    break;
}
}
return 0;
}
 
void push(struct stack* s, int item) {
if (s->top == SIZE - 1) {
    printf("Stack Overflow: Cannot push element, stack is full.\n");
} else {
    s->top++;
    s->list[s->top] = item;
    printf("Pushed %d onto the stack.\n", item);
}
}

int pop(struct stack* s) {
if (s->top == -1) {
printf("Stack Underflow: Cannot pop element, stack is empty.\n");
return -1; // Return a special value indicating an error
} else {
int item = s->list[s->top];
s->top--;
return item;
}
}

int peek(struct stack s) {
if (s.top == -1) {
    printf("Stack is empty.\n");
    return -1; // Return a special value indicating an error
} else {
    return s.list[s.top];
}
}

void display(struct stack s) {
if (s.top == -1) {
    printf("Stack is empty.\n");
} else {
    printf("Stack elements: ");
    for (int i = s.top; i >= 0; i--) {
        printf("%d ", s.list[i]);
    }
    printf("\n");
}
}
