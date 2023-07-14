/*
Program: A program to write data file and read data from file
#include<stdio.h>
void main(){
 char ch;
 FILE *f2;
 f2=fopen("data.dat","w");
 while((ch=getchar())!=EOF)
 putc(ch,f2);
 fclose(f2);
 f2=fopen("data.dat","r");
 while((ch=getc(f2))!=EOF)
 putchar(ch);
 fclose(f2);
}

(ii) A program to write integer data into file and read it from file

#include<stdio.h>
void main(){
 char ch;
 FILE *f2;
 f2=fopen("data.dat","w");
 while((ch=getchar())!=EOF)
 putc(ch,f2);
 fclose(f2);
 f2=fopen("data.dat","r");
 while((ch=getc(f2))!=EOF)
 putchar(ch);
 fclose(f2);
}

(iii) Program to copy one file contents to another file

#include <stdio.h>
#include <stdlib.h>
void main(int argc, char *argv[]){
 FILE *fs,*ft; 
 char ch;
 if(argc!=3) {
 puts("Invalid number of arguments.");
 exit(0);
 }
 fs = fopen(argv[1],"r");
 if(fs==NULL){
 puts("Source file cannot be opened.");
 exit(0);
 }
 ft = fopen(argv[2],"w");
 if (ft==NULL){ // check the condition if the file pointer is NULL or not 
 puts("Target file cannot be opened.");
 fclose(fs);
 exit(0);
 }
 while(1){
 ch=fgetc(fs);
 if (ch==EOF) // check the condition if the file is end or not
 break;
 else
 fputc(ch,ft);
 }
 fclose(fs); 
 fclose(ft);
}

(iv) Program to reverse the first n characters in a file

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(int argc, char *argv[]) {
 char a[15], s[20], n;
 int k,j=0,i,len;
 FILE *fp;
 if(argc!=3) {
 puts("Improper number of arguments.");
 exit(0);
 }
 fp = fopen(argv[1],"r");
 if(fp == NULL) {
 puts("File cannot be opened.");
 exit(0);
 }
 k=*argv[2]-48;
 n = fread(a,1,k,fp);
 a[n]='\0';
 len=strlen(a);
 for(i=len-1;i>=0;i--) {
 s[j]=a[i];
 printf("%c",s[j]);
 j=j+1;
 }
 s[j+1]='\0';
}

(v) A program to write product details

#include<stdio.h>
void main()
{
 char c[20];
 int p,q,b;
 FILE *f2;
 f2=fopen("data.dat","w");
 printf("Enter item name,price, quantity : ");
 scanf("%s%d%d",&c,&p,&q);
 b=p*q;
 printf("Item Name : %s \nPrice : %d \nQuantity : %d\nTotal : %d",c,p,q,b);
 fclose(f2);
}
*/