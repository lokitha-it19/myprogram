#include<stdio.h>
int main()
{
int number,originalnumber,remainder,result=0;
printf("Enter a three digit no:");
scanf("%d",&number);
while(originalnumber!=0)
{
remainder=originalnumber%10;
result=result+remainder*remainder*remainder;
originalnumber/=10;
}
if(result==number)
{
printf("This is Armstrong no");
}
else
{
printf("This is not armstrong no");
}
return 0;
}
