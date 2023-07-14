#include<stdio.h>
void swap(int ,int);
int main(){
 int a,b;
 printf("Enter the a, b values : ");
 scanf("%d%d",&a,&b);
 printf("Before swapping a, b values are %d, %d\n",a,b);
 swap(a,b);
 printf("After swapping a, b values are %d, %d\n",a,b);
 return 0;
}
void swap(int x,int y){
 int z;
 z=x;
 x=y;
 y=z;
}