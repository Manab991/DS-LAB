#include<stdio.h>
#include<string.h>
void main()
{
    char org[100],rev[100];
    printf("Enter the string :");
    gets(org);
    rev[100] = strrev(org);
    printf("Reverse string is %s",org);
}