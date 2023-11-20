#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
struct queue {
    int list[SIZE];
    int front;
    int rear;
};
void enqueue(struct queue* , int );
int dequeue(struct queue* );
void display(struct queue ) ;
int main() {
struct queue q;
q.front = 0;
q.rear = -1;
int op, x;
while (1) {
printf("Enter operation (1:enqueue, 2:dequeue, 3:display, 0:exit): ");
scanf("%d", &op);
switch (op) {
    case 1:
        printf("Enter element to enqueue: ");
        scanf("%d", &x);
        enqueue(&q, x);
        break;
    case 2:
        x = dequeue(&q);
        if (x != -1) {
            printf("Dequeued item: %d\n", x);
        }
        break;
    case 3:
        display(q);
        break;
    case 4:
        return 0;
    default:
        printf("Invalid operation.\n");
        break;
}
}
return 0;
}
void enqueue(struct queue* q, int x) {
if (q->rear == SIZE - 1) {
    printf("Queue Overflow: Cannot enqueue element, queue is full.\n");
} else {
    q->list[++q->rear] = x;
    printf("Enqueued %d into the queue.\n", x);
}
}
int dequeue(struct queue* q) {
if (q->front == q->rear) {
    printf("Queue Underflow: Cannot dequeue element, queue is empty.\n");
    return -1; // Return a special value indicating an error
} else {
    q->front = (q->front + 1) % SIZE;
    int item = q->list[q->front];
    return item;
}
}
void display(struct queue q) {
if (q.front > q.rear) {
    printf("Queue is empty.\n");
} else {
    printf("Queue elements: ");
    for (int i = q.front; i <= q.rear; i++) {
        printf("%d ", q.list[i]);
    }
    printf("\n");
}
}