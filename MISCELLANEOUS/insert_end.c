#include<stdio.h>
#include<stdlib.h>
struct insert_end
{
    int data;
    struct insert_end *link;
};
typedef struct insert_end end;
end *header=NULL;
end *getnode()
{
    end *newnode;
    newnode=(end *)malloc(sizeof(end));
    printf("\nEnter the data of node");
    scanf("%d",&newnode->data);
    newnode->link=NULL;
}
void main()
{
    end *new,*temp,*ptr;
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
    {   ptr=header;
        while(ptr->link!=NULL)
             ptr=ptr->link;
        ptr->link=new;
    }
    ptr=header;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
}


