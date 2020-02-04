#include<stdio.h>
int main()
{
char str[100];
int i,j;
scanf("%s",&str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
printf("%c",str[i]+1);
else if(str[i]>='b'&&str[i]<='d')
printf("e");
else if(str[i]>='f'&&str[i]<='h')
printf("i");
else if(str[i]>='j'&&str[i]<='n')
printf("o");
else if(str[i]>='p'&&str[i]<='t')
printf("u");
else if(str[i]>='v'&&str[i]<='z')
printf("a");
}
return 0;
}

