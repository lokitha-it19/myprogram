#include<stdio.h>
void main()
{
int a,b,c,d;
printf("Enter 4 numbers:");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a<b && a<c && a<d)
{
printf("Smallest number is %d",a);
}
else if(b<c && b<d)
{
printf("Smallest number is %d",b);
}
else if(c<d)
{
printf("Smallest number is %d",c);
}
else
{
printf("Smallest number is %d",d);
}
}

