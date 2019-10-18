#include<stdio.h>
void main() {
    int a[5]={1,2,3,4,5},x,i,c=0;
    printf("Enter the value of x:");
    scanf("%d",&x);
    for(i=0;i<=5;i++)
    {
        if(x==a[i])
        {
            c=1;
            break;
        }
    }
    if(c==0)
    {
        printf("x is not present in the index");
    }
    else
    {
        printf("x is present in the index");
    }
}
