#include<stdio.h>
#include<string.h>
int main()
{
char str1[20],str2[20],temp;
int l1,l2,i,j,flag=0,n;
scanf("%s%s",&str1,&str2);
l1=strlen(str1);
l2=strlen(str2);
if(l1!=l2)
{
flag=1;

}
else
{
for(i=0;i<l1;i++)
{
for(j=i+1;j<l1;j++)
{
if(str1[i]>str1[j])
{
temp=str1[i];
str1[i]=str1[j];
str1[j]=temp;
}
}
}
for(i=0;i<l2;i++)
{
for(j=i+1;j<l2;j++)
{
if(str2[i]>str2[j])
{
temp=str2[i];
str2[i]=str2[j];
str2[j]=temp;
}
}
}
n=strcmp(str1,str2);
if(n!=0)
{
flag=1;
}
}
if(flag==0)
printf("annagram");
else
printf("not annagram");
return 0;
}
