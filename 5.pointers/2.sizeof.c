#include <stdio.h>
struct str {
};
void func(int a, int b){};
int main()
{
int a = 10;
char c = 'G';
struct str x;
int* ptr_int = &a;
char* ptr_char = &c;
struct str* ptr_str = &x;
void (*ptr_func)(int, int) = &func;
void* ptr_vn = NULL;
printf("Size of Integer Pointer \t:\t%d bytes\n",sizeof(ptr_int));
printf("Size of Character Pointer\t:\t%d bytes\n",sizeof(ptr_char));
printf("Size of Structure Pointer\t:\t%d bytes\n",sizeof(ptr_str));
printf("Size of Function Pointer\t:\t%d bytes\n",sizeof(ptr_func));
printf("Size of NULL Void Pointer\t:\t%d bytes",sizeof(ptr_vn));
}
