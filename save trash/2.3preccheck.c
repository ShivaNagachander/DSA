#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char stack[50];
int top = 0;

void push(char);
char pop();
int precedence(char);
int is_operator(char);

void push(char a) {
    stack[++top] = a;
}

char pop() {
    if (top == 0) {
        printf("Empty stack");
        return '\0'; // Return a null character or handle the error
    } else {
        return stack[top--];
    }
}

int precedence(char a) {
    if (a == '(') {
        return 3;
    } else if (a == '+' || a == '-') {
        return 1;
    } else if (a == '*' || a == '/') {
        return 2;
    } else {
        return 0;
    }
}

int is_operator(char symbol) {
    if (symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol == '-') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char infix[10];
    char *x;
    char c;

    printf("Enter the arithmetic expression: ");
    scanf("%s", infix); // Use infix as input variable

    x = infix;

    while (*x != '\0') {
        if ((*x) == '(') {
            push(*x);
        } else if (isdigit(*x) || isalpha(*x)) {
            printf("%c", *x);
        } else if (*x == ')') {
            while ((c = pop()) != '(') {
                printf("%c", c);
            }
        } else {
            while (precedence(stack[top]) >= precedence(*x)) { // Corrected comparison
                printf("%c", pop());
            }
            push(*x);
        }
        x++;
    }

    while (top != 0) {
        printf("%c", pop());
    }

    return 0;
}

