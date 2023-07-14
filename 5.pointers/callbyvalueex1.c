#include<stdio.h>
void square(int n);
int main () { 
    int number ;
    printf("Enter the an Number :");
    scanf("%d",&number);
    square(number);
    printf("Number = %d\n",number);
    return 0;
}
//call by value
void square(int n) {
    n = n * n;
    printf("Square = %d\n",n);
}