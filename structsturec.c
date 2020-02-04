#include<stdio.h>
#include<string.h>
struct student
{
char name[100];
int rno;
float fees;
char add[1000];
}s;
int main()
{
strcpy(s.name,"kiran");
s.rno=1234;
s.fees=247500;
strcpy(s.add,"hyd");
printf("\n STUDENT DETAILS:\n");
printf("\n name:%s",s.name);
printf("\n rno:%d",s.rno);
printf("\n fees:%.2f",s.fees);
printf("\n address:%s",s.add);
return 0;
}

