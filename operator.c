#include<stdio.h>
void main()
{
int a,operator,b;
printf("Enter the operand 1:");
scanf("%d",&a);
printf("Enter the operator:");
scanf("%d",&operator);
printf("Enter the operand 2:");
scanf("%d",&b);
switch(operator)
{
case 1:
{
int c;
c=a+b;
printf("%d",c);
}
break;
case 2:
{
int d;
d=a-b;
printf("%d",d);
}
break;
case 3:
{
int e;
e=a/b;
printf("%d",e);
}
break;
case 4:
{
int f;
f=a*b;
printf("%d",f);
}
break;
default:
{
printf("Enter a valid operation");
}
}
}

