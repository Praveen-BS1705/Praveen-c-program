#include<stdio.h>
#include<string.h>
void main()
{
char str1[100];char str2[100];
scanf("%s",str1);
C-SKILL
scanf("%s",str2);
strcmp(str1,str2);
int result = strcmp(str1,str2);
if (result==0)
{
printf("strings are equal.\n");
}
else if(result<0)
{
printf("%s comes after %s lexicograhically",str1,str2);
}
else
{
printf("%s comes before %s lexicograhically",str1,str2);
}
}
