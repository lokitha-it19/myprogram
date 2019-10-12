#include<stdio.h>
void main() {
    char s[10];
    printf("Enter a string:");
        scanf("%s",s);
     for(int i=0;s[i]!='\0';i++)
     {
    printf("%c\n",s[i]);
     }
}
