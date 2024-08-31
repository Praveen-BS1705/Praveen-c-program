#include<stdio.h>
void swapbyvalue(int a,int b)
{
int temp =a;
a=b;
b=temp;
printf("swap by value is : a=%d,b=%d\n",a,b);
}
void swapbyrefernce(int *o,int *p)
{
int temp=*o;
*o=*p;
*p=temp;
printf("swap by reference is : o=%d,p=%d\n",*o,*p);
}
int main()
{
int x=30,y=20;
printf("before swap call by value x=%d,y=%d\n",x,y);
swapbyvalue(x,y);
printf("after swap call by value x=%d,y=%d\n",x,y);
int r=10,e=25;
printf("before swap call by reference r=%d,e=%d\n",r,e);
swapbyrefernce(&r,&e);
printf("after swap call by reference r=%d,e=%d\n",r,e);
printf("RAJSHEKHAR");
}
