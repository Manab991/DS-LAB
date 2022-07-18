#include<stdio.h>
#include<stdlib.h>
struct beg_dlt
{
    int data;
    struct beg_dlt*next;
};
typedef struct beg_dlt beg;
beg*header=NULL;
beg*getnode()
{
    beg*newnode;
    newnode=(beg*)malloc(sizeof(beg));
    printf("Enter the data of the node :");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
}

void create(int n)
{
    int i;
    beg*new,*temp;
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

}
void display()
{
    beg*temp;
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
void dlt()
{   beg*temp;
    if(header==NULL)
        printf("List is already empty");
    else
    {
        temp=header;
        header=temp->next;
        free(temp);

    }
}
 void main()
 {
    int n;
    printf("\nEnter how many nodes were present in previous node :");
    scanf("%d",&n);
    create(n);
    printf("\nPrevious linked list elements are:");
    display();
    printf("\nDELETION OPERATION :\n");
    dlt();
    printf("\nNEW linked list elements are: ");
    display();
 }