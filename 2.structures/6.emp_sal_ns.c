#include<stdio.h>
struct employee {
 char name[10];
 int id;
 struct salary
 {
 int basic,pf;
 float hra,ta,da,gross;
 }s1;
}e1;
void main() {
 printf("Enter Name & Id of Employee : ");
 scanf("%s%d",&e1.name,&e1.id);
 printf("Enter Basic Salary of Employee : ");
 scanf("%d",&e1.s1.basic);
 e1.s1.hra = (15 * e1.s1.basic)/100;
 e1.s1.da = (45 * e1.s1.basic)/100;
 e1.s1.pf = (12 * e1.s1.basic)/100;
 e1.s1.gross = e1.s1.basic + e1.s1.hra + e1.s1.da - e1.s1.pf;
 printf("Employee Details ::\n");
 printf("Name :%s \nID : %d",e1.name,e1.id);
 printf("\nBasic Salary: %d \nHRA : %.2f\n",e1.s1.basic,e1.s1.hra);
 printf("DA : %.2f\nPf : %d\nGross Salary : %.2f\n",e1.s1.da,e1.s1.pf,e1.s1.gross);
}