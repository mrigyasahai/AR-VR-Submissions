#include<stdio.h>
#include<conio.h>

void main()
{
int n, rem = 0, count = 1;
printf("enter the input");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
n=n/10
rem=count++;
}
printf("number of digits in a number is: %d",rem);
}