#include<stdio.h>
#include<stdlib.h>
struct ins_beg
{
 int data;
 struct ins_beg*right;
 struct ins_beg*left;
};
typedef struct ins_beg beg;
beg*header=NULL;
 beg*getnode()
 {
     beg*newnode;
     newnode=(beg*)malloc(sizeof(beg));
     printf("\nNODE'S VALUE :");
     scanf("%d",&newnode->data);
     newnode->left=NULL;
     newnode->right=NULL;
 }
void create(int n)
{
    beg*new,*temp;
    int i;
    for(i=0;i<n;i++)
    {
        new=getnode();
        if(header==NULL)
        header=new;
        else
        {
            temp=header;
            while(temp->right!=NULL)
           {
                temp=temp->right;
           }
            temp->right=new;
            new->left=temp;
        }
    }
}
void ins()
{
    beg*new;
    new=getnode();
    if(header==NULL)
    {
        header=new;
    }
    else
    {
        new->right=header;
       /* header->left=new;
        header=new;*/
        header->right->left=new;
        header=new;
    }
}
 void display()
 {
     beg*temp;
     int i;
     if(header==NULL)
     {
         printf("The list is empty\n");
     }
     else
     { 
         temp=header;
         while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->right;
        }
     }
 }
void main()
{
    int n;
    printf("\nEnter the no. of nodes in previous linked list ::");
    scanf("%d",&n);
    create(n);
    printf("\nPrevious linked list is ::");
    display();
    printf("\n\n:: INSERTION OPERATION::\n\n");
    ins();
    printf("\nNew linked list is ::");
    display();
    
}
