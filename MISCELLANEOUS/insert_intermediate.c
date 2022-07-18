#include<stdio.h>
#include<stdlib.h>
struct insert_mid
{
    int data;
    struct insert_mid *link;
};
typedef struct insert_mid mid;
mid *header=NULL;
mid *getnode()
{
    mid *newnode;
    newnode=(mid *)malloc(sizeof(mid));
    printf("Enter the data of node");
    scanf("%d",&newnode->data);
    newnode->link=NULL;
}
void main()
{
    mid *new,*temp,*ptr;
    int n,i,pos;
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

    printf("\nEnter the position where new node has to be inserted :");
    scanf("%d",&pos);
    new=getnode();
    if (pos>1 && pos<n)
        {
            ptr=header;
            for(i=2;i<pos;i++)
            {
                ptr=ptr->link;
            }
            new->link=ptr->link;
            ptr->link=new;
        }
    else
        printf("Enter the correct position");

    ptr=header;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
    
}


