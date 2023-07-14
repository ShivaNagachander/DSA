#include <stdio.h>
int main () {
int a=10;
int *p1;
int **p2;
p1 = &a;
p2 = &p1;
printf("Value of a = %d\n", a );
printf("Value available at *p1 = %d\n", *p1 );
printf("Value available at **p2 = %d\n", **p2);
printf("address of a = %u\n",&a);
printf("address available of *p1 = %u\n",&p1 );
printf("address available of **p2 = %u\n",&p2);
return 0;
}
