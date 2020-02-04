#include<stdio.h>
struct book
{
char title[100];
int pages;
float price;
};
int main()
{
struct book b;
printf("enter title,pages,price of the book");
scanf("%s%d%f",&b.title,&b.pages,&b.price);
printf("\n BOOK DETAILS ARE:\n");
printf("\n TITLE:%s",b.title);
printf("\n NO OF PAGES:%d",b.pages);
printf("\n PRICE:%6.2f",b.price);
return 0;
} 
