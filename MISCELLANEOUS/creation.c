#include<stdio.h>
#include<stdlib.h>
struct cre
{
    int data;
    struct cre* next;
};
typedef struct cre creation;
creation * header=NULL;
creation* getnode()
{
    creation* newnode;
    newnode= (creation*)malloc(sizeof(creation));
    printf("Enter the data of node :");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
}

void main()
{
    creation *new,*temp;
    int n,i;
    printf("\nHow many node is needed :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            new=getnode();
            if(header==NULL)
                {
                    header=new;
                }
            else
                {   temp=header;
                    while(temp->next !=NULL)
                        temp=temp->next;
                    temp->next=new;    
                }
        }    
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
