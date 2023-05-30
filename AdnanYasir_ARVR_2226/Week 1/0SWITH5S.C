#include<stdio.h>
#include<conio.h>
int convertToFive(int N)
{
if(N==0)
{
return 0;
}
int last_digits= N%10;
if(last_digit==0)
last_digit==0)
last_digit=5;
return convertTofive(N/10)*10+last_digit;
}
int main()
{
int N=14006;
cout << convertToFive(N) << endl;
}