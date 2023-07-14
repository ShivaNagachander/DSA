#include <stdio.h>
struct book
{
char title[20];
int pages;
float price;
};
void main() 
{
struct book b1,b2;
printf("enter title,pages and price of book1 respectively\n");
scanf("%s%d%f",b1.title,&b1.pages,&b1.price);
printf("enter title,pages and price of book2 respectively\n");
scanf("%s%d%f",b2.title,&b2.pages,&b2.price);
printf("title  pages and price \n");
printf("         book1 \n");
printf("%s\t%d\t%f",b1.title,b1.pages,b1.price);
printf("\n         book2 \n");
printf("%s\t%d\t%f",b2.title,b2.pages,b2.price);
}
