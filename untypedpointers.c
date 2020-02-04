#include<stdio.h>
int main()
{
int a=10;
char b='$';
float c=145.78;
void *vptr;
vptr=&a;
printf("\n the address of a using vptr :%p",vptr);
printf("\n the value of a using vptr:%d",*((int *)vptr));
vptr=&b;
printf("\n the address of b using vptr :%p",vptr);
printf("\n the value of busing vptr:%c",*((char *)vptr));
vptr=&c;
printf("\n the address of c using vptr:%p",vptr);
printf("\n the value of c:%.2f",*((float *)vptr));
return 0;
}
