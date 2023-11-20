#include<stdio.h>
#include<stdlib.h>
#define max 5
int stack[5],top=0;
void push(int stack[],int a){
    if(top==max)
    printf("overflow");
    else{
        top++;
        stack[top]=a;
}
}
void pop(int stack[]){
    if(top==0)
    printf("overflow");
    else{
        printf("val deleted from stack is %d\n",stack[top]);
        top--;
    }
}
void display (int stack []){
    int i;
    for(int i=0;i<=top;i++){
        printf("%d\n",stack[i]);
    }
}
int main(){
    int choice,element;
    while(1){
        printf("\nmenu:\n1.push element to stack.\n2.pop element from stack.\n3.display elements of stack.\
        4.exit program.");
        scanf("%d",&choice);
        switch(choice){
            case 1:printf("enter the number you want to add in stack : ");
            scanf("%d",&element);
            push(stack,element);
            break;
            case 2:pop(stack);
            break;
            case 3:display(stack);
            break;
            default:return 0;
            }
            }
            return 0;
            }
            