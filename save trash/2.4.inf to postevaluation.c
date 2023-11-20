#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Include this for isdigit()

int stack[20];
int top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

int main() {
    char post_exp[20];
    char *e;
    int n1, n2, n3, num;
    printf("Enter the postfix expression: \n");
    gets(post_exp); // Avoid using gets(), consider using fgets() instead
    e = post_exp;

    while (*e != '\0') {
        if (isdigit(*e)) {
            num = *e - '0'; // Convert character to integer
            push(num);
        } else {
            n2 = pop();
            n1 = pop();
            switch (*e) {
                case '+':
                    n3 = n1 + n2;
                    break;
                case '-':
                    n3 = n1 - n2;
                    break;
                case '*':
                    n3 = n1 * n2;
                    break;
                case '/':
                    n3 = n1 / n2; // Corrected the order
                    break;
            }
            push(n3);
        }
        e++;
    }
    printf("Result of postfix expression %s = %d\n", post_exp, stack[top]);
    return 0;
}

