#include<stdio.h>
#include<string.h>
void main()
{
char str[100];
int i,length,flag=0;
printf("enter the string to check: \n");
scanf("%s", str);
length=strlen(str);
for (i=0;i<length;i++)
{
if(str[i] != str[length-i-1])
{
flag=1;
break;
}
}
if (flag==1)
{
printf("string is not plaindrome \n");
}
else
printf("string is  palindrome \n");
}
