#include<stdio.h>
void main() 
{
    int low,high,i,sum;
    printf("Enter the low value:");
    scanf("%d",&low);
    printf("Enter the high value:");
    scanf("%d",&high);
    for(i=low;i<=high;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
}
