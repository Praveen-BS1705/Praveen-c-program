#include<stdio.h>
void main()
{
int arr[2][2],i,j;
printf("enter the elements for matrices:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&arr[i][j]);
}
}
printf("the elements of matrix are:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++){
printf("%d\t",arr[i][j]);
}
C-SKILL
printf("\n");
}
}
