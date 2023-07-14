#include<stdio.h>
struct book
{
char bname[50];
int sno;
int pages;
int rate;
};
int main()
{
struct book b1;
printf("Enter Book Sno:");
scanf("%d",&b1.sno);
printf("Enter Number of pages:");
scanf("%d",&b1.pages);
printf("Enter price:");
scanf("%d",&b1.rate);
printf("Enter Book Name:");
scanf("%s",b1.bname);
printf("\nName of the Book : %s\n ",b1.bname);
printf("\nSno of the Book : %d\n ",b1.sno);
printf("\nPages in the Book : %d\n ",b1.pages);
printf("\nPrice of the Book : %d\n",b1.rate);

}
