#include<stdio.h>
int main()
{
int i,n,n1=0,n2=1,n3;
printf("Enter the value of n:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(i==0 || i==1)
{
n3=i;
}
else
n3=n1+n2;
printf("%d",n3);
n1=n2;
n2=n3;
}
return 0;
}

