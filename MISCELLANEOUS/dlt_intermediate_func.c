#include<stdio.h>
#include<stdlib.h>
struct mid_dlt
{
    int data;
    struct mid_dlt*next;
};
typedef struct mid_dlt mid;
mid*header=NULL;
mid*getnode()
{
    mid*newnode;
    newnode=(mid*)malloc(sizeof(mid));
    printf("Enter the data of the node :");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
}

void create(int n)
{
    int i;
    mid*new,*temp;
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
    mid*temp;
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
void dlt(int n)
{   mid *ptr,*prev;
    int pos,i;
    printf("\nEnter which node has to be deleted :");
    scanf("%d",&pos);
    if (pos>1 && pos<n)
        {
            prev=ptr=header;
            for(i=2;i<=pos;i++)
            {
                prev=ptr;
                ptr=ptr->next;
            }
            prev->next=ptr->next;
            free(ptr);
        }
    else
        printf("Enter the correct position");

}
 void main()
 {
    int n;
    printf("\nEnter how many nodes are present in previous node :");
    scanf("%d",&n);
    create(n);
    printf("\nPrevious linked list elements are:");
    display();
    printf("\nOPERATION FOR DELETION AT THE INTERMEDIATE  :\n");
    dlt(n);
    printf("\nNEW linked list elements are :  ");
    display();
 }