#include<stdio.h>
struct student
{
    char name[100];
};
void main()
{
    struct student s1,s2,*p1,*p2;
    p1=&s1;
    p2=&s2;

    printf("Enter the name of the s1 :");
    scanf("%s",&s1.name);
     printf("Enter the name of the s2:");
    scanf("%s",&s2.name);

    printf("Name of s1 %s\n",p1->name);
    printf("Name of s2 %s",p2->name);


}