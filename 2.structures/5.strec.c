#include<stdio.h>
struct student
{
int rollno;
char name[20];
int m1;
int m2;
int m3;
int t;
float per;
};
int main()
{
struct student a;
printf(" Enter RollNo, Name amd three sub marks\n");
scanf("%d%s%d%d%d",&a.rollno,a.name,&a.m1,&a.m2,&a.m3);
a.t=a.m1+a.m2+a.m3;
a.per=a.t/3.0;
printf("rollno=%d\n",a.rollno);
printf("Name=%sk\n",a.name);
printf("m1=%d\n",a.m1);
printf("m2=%d\n",a.m2);
printf("m3=%d\n",a.m3);
printf("total=%d\n",a.t);
printf("per=%f\n",a.per);
}
