#include<stdio.h>
#include<stdlib.h>
struct del_beg
{
 int data;
 struct del_beg*right;
 struct del_beg*left;
};
typedef struct del_beg beg;
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
void del()
{
    beg*temp;
    if(header==NULL)
    {
        printf("\nThe list is already empty");
    }
    else
    {
        temp=header;
        header=temp->right;
        temp->right->left=NULL;
        free(temp);
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
    printf("\n\n:: DELETION OPERATION IN THE BEGINNING::\n\n");
    del();
    printf("\nNew linked list is ::");
    display();
    
}
