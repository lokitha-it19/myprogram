#include<stdio.h>
void main() {
    int n,i,a[5];
    printf("Enter n values:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n;i>=1;i--)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}
