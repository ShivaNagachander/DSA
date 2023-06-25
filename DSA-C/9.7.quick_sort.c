#include<stdio.h>
void quicksort(int x[10],int first,int last);
void main(){
int x[10],i,n;
printf("Enter no of elements : ");
scanf("%d",&n);
printf("Enter %d elements : ",n);
for(i=1;i<=n;i++)
scanf("%d",&x[i]);
quicksort(x,1,n);
printf("Sorted Elements are : ");
for(i=1;i<=n;i++)
printf("%3d",x[i]);
}
void quicksort(int x[10],int first,int last) {
int pivot,i,j,t;
if(first<last) {
pivot=first; 
 i=first;
 j=last;
while(i<j) {
while(x[i]<=x[pivot] && i<last)
i++;
while(x[j]>x[pivot])
j--;
if(i<j) {
t=x[i]; 
 x[i]=x[j]; 
 x[j]=t;
} 
}
t=x[pivot];
x[pivot]=x[j];
 x[j]=t;
quicksort(x,first,j-1);
quicksort(x,j+1,last);
} 
}
