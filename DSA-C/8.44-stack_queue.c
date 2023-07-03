#include<stdio.h>
#include<stdlib.h>
int size=100;
struct stack
{
    int list[100];
    int top;
};
void push(struct stack*, int);
int pop(struct stack*);
int peek(struct stack);
void display(struct stack);
void main()
{
    struct stack s;
    s.top=-1;
    int op, x, n;
    while(1)
    {
        printf("Enter 1 for push\n");
        printf("Enter 2 for pop\n");
        printf("Enter 3 for peak\n");
        printf("Enter 4 for display\n");
        printf("Enter 5 for exit\n");
        printf("Top Value: %d\n",s.top);
        printf("Enter your choice\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:printf("Enter Value to be added\n");
                   scanf("%d",&x);
                   push(&s,x);
                   printf("Element added successfully\n");
                   break;
            case 2:n=pop(&s);
                   printf("Deleted Element: %d\n",n);
                   break;   
            case 3:n=peek(s);
                   printf("Top Element is %d\n",n);
                   break;
            case 4:display(s);
                   break;
            case 5:exit(0);
            default:printf("Invalid Choice\n");                      
        }
    }
}
void push(struct stack* sp, int x)
{
    if(sp->top==(size-1))
    {
        printf("Overflow\n");
        exit(0);
    }
    int temp=sp->top+1;
    sp->list[temp]=x;
    sp->top++;;
}
int pop(struct stack* sp)
{
    if(sp->top<0)
    {
        printf("Underflow\n");
        exit(0);
    }
    int temp=sp->top;
    sp->top--;
    return(sp->list[temp]);
}
int peek(struct stack sp)
{
    if(sp.top<0)
    {
        printf("Underflow\n");
        exit(0);
    }
    return(sp.list[sp.top]);
}
void display(struct stack sp)
{
    int temp=0;
    while(temp<=sp.top)
    {
        printf("%d\n",sp.list[temp]);
        temp++;
    }
}









_____________________________



#include<stdio.h>
#include<stdlib.h>
int size=100;
struct queue
{
    int list[100];
    int front, rear;
};
void enqueue(struct queue*, int);
int dequeue(struct queue*);
void display(struct queue);
void main()
{
    struct queue q;
    q.front=0;
    q.rear=-1;
    int op, x, n;
    while(1)
    {
        printf("Enter 1 for enqueue\n");
        printf("Enter 2 for dequeue\n");
        printf("Enter 3 for display\n");
        printf("Enter 4 for exit\n");
        printf("Enter your choice\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:printf("Enter Value to be added\n");
                   scanf("%d",&x);
                   enqueue(&q,x);
                   printf("Element added successfully\n");
                   break;
            case 2:n=dequeue(&q);
                   printf("Deleted Element: %d\n",n);
                   break;   
            case 3:display(q);
                   break;
            case 4:exit(0);
            default:printf("Invalid Choice\n");                      
        }
    }
}
void enqueue(struct queue* qp, int x)
{
    if(qp->rear==(size-1))
    printf("overflow\n");
    else
    {
        int temp=qp->rear+1;
        qp->list[temp]=x;
        qp->rear++;
    }
}
int dequeue(struct queue* qp)
{
    if(qp->front>qp->rear)
    printf("Underflow\n");
    else
    {
        int temp=qp->front;
        qp->front++;
        return(qp->list[temp]);
    }
}
void display(struct queue q)
{
    printf("Printing Elements\n");
    for(int i=q.front;i<=q.rear;i++)
    {
        printf("%d\n",q.list[i]);
    }
}


