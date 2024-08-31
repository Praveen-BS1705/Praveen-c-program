#include<stdio.h>
struct book{
int num;
char name[20];
float price;
};
int main()
{
struct book im;
im.num=1;
im.price=100.0;
strcpy(im.name,"Iron Man");
printf("book Number: %d\n",im.num);
printf("book Name: %s\n",im.name);
printf("book price: %f\n",im.price);
}
