#include <stdio.h>
struct product
{
char pname[10];
int pid;
int pqty;
float pprice;
float pbill;
}p1;
void main() 
{
printf("enter pname pid pqty pprice respectively\n");    
scanf("%s%d%d%fn",p1.pname,&p1.pid,&p1.pqty,&p1.pprice);
p1.pbill=p1.pprice*p1.pqty;
printf("bill is %f",p1.pbill);
}
