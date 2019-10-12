#include<stdio.h>
void main()
{
int a,b,c,d,e,sum;
printf("Enter 5 values:");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
sum=a+b+c+d+e;
printf("The value of sum is %d",sum);
if(a>50 && b>50 && c>50 && d>50 && e>50)
{
printf("Pass");
}
else
{
printf("Fail");
}
}


