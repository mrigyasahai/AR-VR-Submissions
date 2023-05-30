#include<stdio.h>
#include<math.h>

int main()
{
int n = 20901;
int count = 0;

while(n>0)
{
count++;
n = n/10;
}
printf("no. of digits = %d", count);
return 0;
}