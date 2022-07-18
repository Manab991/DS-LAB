#include<stdio.h>
struct func
{
    int a;
    struct func*flink;
    struct func*blink;
}obj1,obj2,obj3;
void main()
{   
    obj1.flink=NULL;
    obj1.a=100;
    obj1.blink=NULL;
    obj2.flink=NULL;
    obj2.a=200;
    obj2.blink=NULL;
    obj3.flink=NULL;
    obj3.a=300;
    obj3.blink=NULL;
    obj1.flink=&obj2;
    obj2.flink=&obj3;
    obj3.blink=&obj2;
    obj2.blink=&obj1;
    printf("Accessing  a of obj1, obj2 and obj3 by obj1\n");
    printf("%d\t", obj1.a);
    printf("%d\t", obj1.flink->a);
    printf("%d\n", obj1.flink->flink->a);
 
    
    printf("Accessing a of obj2, obj1 and obj3 by obj2\n");
    printf("%d\t", obj2.a);
    printf("%d\t", obj2.blink->a);
    printf("%d\n", obj2.flink->a);
 
    
    printf("Accessing a of obj1, obj2 and obj3 by obj3\n");
    printf("%d\t", obj3.blink->blink->a);
    printf("%d\t", obj3.blink->a);
    printf("%d", obj3.a);
   
}
