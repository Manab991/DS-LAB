#include<stdio.h>
#include<stdlib.h>
struct mid_ins
{
    int data;
    struct mid_ins*next;
};
typedef struct mid_ins mid;
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
void insert(int n)
{   mid *ptr,*new;
    int pos,i;
    printf("\nEnter the position where new node has to be inserted :");
    scanf("%d",&pos);
    new=getnode();
    if (pos>1 && pos<n)
        {
            ptr=header;
            for(i=2;i<pos;i++)
            {
                ptr=ptr->next;
            }
            new->next=ptr->next;
            ptr->next=new;
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
    printf("\nOPERATION FOR INSERTION AT THE INTERMEDIATE  :\n");
    insert(n);
    printf("\nNEW linked list elements are :  ");
    display();
 }