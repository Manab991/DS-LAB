#include<stdio.h>
#include<string.h>
void main()
{
    int m,n,c=0;
    char org[100],rev[100];
    printf("Enter the string :");
    gets(org);

    while(org[c]!='\0')
    {
        c++;
    }
    m=c-1;
    for(n=0;n<c;n++)
    {
        rev[n]=org[m];
        m--;
    }
    printf("Reverse string :%s",rev);
}