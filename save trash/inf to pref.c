#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_SIZE 20

int stack[MAX_SIZE];
int top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

int precedence(char ch) {
    if (ch == '+' || ch == '-') {
        return 1;
    } else if (ch == '*' || ch == '/') {
        return 2;
    }
    return 0;
}

void infixToPrefix(char *infix, char *prefix) {
    int n = strlen(infix);

    // Reverse the infix expression
    char reversedInfix[MAX_SIZE];
    int j = 0;
    for (int i = n - 1; i >= 0; i--) {
        reversedInfix[j++] = infix[i];
    }
    reversedInfix[j] = '\0';

    // Replace opening parentheses with closing parentheses and vice versa
    for (int i = 0; i < n; i++) {
        if (reversedInfix[i] == '(') {
            reversedInfix[i] = ')';
        } else if (reversedInfix[i] == ')') {
            reversedInfix[i] = '(';
        }
    }

    // Evaluate the reversed infix expression
    char *e = reversedInfix;
    j = 0;

    while (*e != '\0') {
        if (isdigit(*e)) {
            prefix[j++] = *e;
        } else if (*e == '(') {
            push(*e);
        } else if (*e == ')') {
            while (top != -1 && stack[top] != '(') {
                prefix[j++] = pop();
            }
            pop(); // Pop the '('
        } else if (isOperator(*e)) {
            while (top != -1 && precedence(stack[top]) >= precedence(*e)) {
                prefix[j++] = pop();
            }
            push(*e);
        }
        e++;
    }

    // Pop any remaining operators from the stack
    while (top != -1) {
        prefix[j++] = pop();
    }

    // Null-terminate the prefix expression
    prefix[j] = '\0';

    // Reverse the prefix expression to get the final result
    n = strlen(prefix);
    for (int i = 0; i < n / 2; i++) {
        char temp = prefix[i];
        prefix[i] = prefix[n - i - 1];
        prefix[n - i - 1] = temp;
    }
}

int main() {
    char infix_exp[MAX_SIZE];
    char prefix_exp[MAX_SIZE];

    printf("Enter the infix expression: \n");
    gets(infix_exp); // Avoid using gets(), consider using fgets() instead

    infixToPrefix(infix_exp, prefix_exp);

    printf("Prefix expression: %s\n", prefix_exp);

    return 0;
}
