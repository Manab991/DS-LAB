#include<stdio.h>
#include<stdlib.h>
struct trav
{
    int data;
    struct trav* next;
};
typedef struct trav traverse;
traverse * header=NULL;
traverse* getnode()
{
    traverse* newnode;
    newnode= (traverse*)malloc(sizeof(traverse));
    newnode->next=NULL;
}

void main()
{
    traverse *new1,*new2,*new3,*temp;
            new1=getnode();
            new1->data=10;
            header=new1;
            new2=getnode();
            new2->data=20;
            new3=getnode();
            new3->data=30;    
            new1->next=new2;
            new2->next=new3;
             
    printf("Linked list elements are:");
    if(header==NULL)
        printf("The list is empty");
    else
       { temp=header;
         while(temp!=NULL)
        {  printf("%d\t",temp->data);
           temp=temp->next;
        }
       }
}
 