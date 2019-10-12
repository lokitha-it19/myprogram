 #include<stdio.h>
void main()
{
 int i,a,fact=1;
 printf("Enter the value of a:");
 scanf("%d",&a);
 for(i=1;i<=a;i++)
 {
 fact=fact*i;
}
printf("The value of factorial =%d",fact);
}

