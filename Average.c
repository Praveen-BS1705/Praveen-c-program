#include<stdio.h>
void main(){
int n,sum=0,avg;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
sum=sum+(n%10);
n=n/10;
C-SKILL
avg=sum/3;
}
printf("sum of digits is %d",sum);
printf("average of digits is %d",avg);
}
