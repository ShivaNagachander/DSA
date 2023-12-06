#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char stack[50];
int top = -1;
char postfix[50];

void push(char);
char pop();
int precedence(char);
int is_operator(char);

int main() {
    char infix[10];
    char *x;
    char c;
    printf("Enter the arithmetic expression: ");
    scanf("%s", infix);
    x = infix;
    printf("Postfix expression: ");
    while (*x != '\0') {
        if (isdigit(*x) || isalpha(*x)) {
            printf("%c", *x);
        } else if (*x == '(') {
            push(*x);
        } else if (*x == ')') {
            while ((c = pop()) != '(') {
                printf("%c", c);
            }
        } else if (is_operator(*x)) {
            while (top != -1 && precedence(stack[top]) >= precedence(*x)) {
                printf("%c", pop());
            }
            push(*x);
        }
        x++;
    }

    while (top != -1) {
        printf("%c", pop());
    }

    return 0;
}

void push(char a) {
    stack[++top] = a;
}

char pop() {
    if (top == -1)
        return '\0'; // Return a null character for an empty stack
    else
        return stack[top--];
}

int precedence(char a) {
    if (a == '(')
        return 3;
    else if (a == '+' || a == '-')
        return 1;
    else if (a == '*' || a == '/')
        return 2;
    else
        return 0;
}

int is_operator(char symbol) {
    if (symbol == '^' || symbol == '+' || symbol == '/' || symbol == '*' || symbol == '-')
        return 1;
    else
        return 0;
}
