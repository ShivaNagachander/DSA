#include <stdio.h>

int main() {
int num1 = 10, num2 = 5;
int *p1 = &num1, *p2 = &num2;
int sum = *p1 + *p2;
printf("Sum of %d and %d = %d\n", *p1, *p2, sum);
int diff = *p1 - *p2;
printf("Difference between %d and %d = %d\n", *p1, *p2, diff);
int product = (*p1) * (*p2);
printf("Product of %d and %d = %d\n", *p1, *p2, product);
float quotient = (float)(*p1) / (*p2);
printf("Quotient of %d and %d = %.2f\n", *p1, *p2, quotient);
int remainder = (*p1) % (*p2);
printf("Remainder of %d divided by %d = %d\n", *p1, *p2, remainder); 
}