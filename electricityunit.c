#include<stdio.h>
void main()
{
int a,bill,charge;
printf("Enter total units consumed:");
scanf("%d",&a);
if(a<=50)
{
bill=a*0.50;
printf("Electricity Bill = %d",bill);
}
else if(50<a<=150)
{
bill=a*0.75;
printf("Electricity Bill = %d",bill);
}
else if(150<a<=250)
{
bill=a*1.20;
printf("Electricity Bill = %d",bill);
}
else if(a>250)
{
bill=a*1.50;
printf("Electricity Bill = %d",bill);
{
charge=(20/100)*bill;
printf("Electricity Bill = %d",charge);
}
}
}



