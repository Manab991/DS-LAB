#include<stdio.h>
struct func
{
    int a;
    struct func*link;
}obj1,obj2;
void main()
{   
    obj1.a=10;
    obj1.link=NULL;
    obj2.a=20;;
    obj2.link=NULL;
    obj1.link=&obj2;
    printf("%d",obj1.link->a);

}