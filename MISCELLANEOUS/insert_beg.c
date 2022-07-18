#include<stdio.h>
#include<stdlib.h>
struct insert_beg
{
    int data;
    struct insert_beg *link;
};
typedef struct insert_beg beg;
beg *header=NULL;
beg *newnode,*ptr;
beg *getnode()
{
    beg *newnode;
    newnode=(beg *)malloc(sizeof(beg));
    printf("Enter the data of node");
    scanf("%d",&newnode->data);
    newnode->link=NULL;
}
void main()
{
    beg *new,*temp;
    int n,i;
    printf("\nHow many node is in previous linked list :");
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
                    while(temp->link !=NULL)
                        temp=temp->link;
                    temp->link=new;    
                }
        }    
    printf("Previous Linked list elements are:");
    if(header==NULL)
        printf("The list is empty");
    else
       { temp=header;
         while(temp!=NULL)
        {  printf("%d\t",temp->data);
           temp=temp->link;
        }
       }

    new=getnode();
    if(header==NULL)
        header=new;
    else
    {
        new->link=header;
        header=new;
    }
    ptr=header;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
}


