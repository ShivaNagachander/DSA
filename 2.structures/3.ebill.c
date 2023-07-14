#include <stdio.h>
struct electricity
{
char cn[20];
char cid[20];
int units;
float bill;
}e1;
void main() 
{
printf("enter cn,cid,units respectively\n");
scanf("%s%s%d",e1.cn,e1.cid,&e1.units);
e1.bill=0;
int ppu;
if(e1.bill <= 50)
ppu=5;
else if(e1.bill < 100)
ppu=10;
else if(e1.bill < 200)
ppu=20;
else if(e1.bill < 300)
ppu=30;
else         
ppu=40;
e1.bill=ppu*e1.units;
printf("bill=%f\n",e1.bill);
}
