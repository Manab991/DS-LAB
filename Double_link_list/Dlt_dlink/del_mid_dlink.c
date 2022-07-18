#include<stdio.h>
#include<stdlib.h>
struct del_mid
{
 int data;
 struct del_mid*right;
 struct del_mid*left;
};
typedef struct del_mid mid;
mid*header=NULL;

 mid*getnode()
 {
     mid*newnode;
     newnode=(mid*)malloc(sizeof(mid));
     printf("\nNODE'S VALUE :");
     scanf("%d",&newnode->data);
     newnode->left=NULL;
     newnode->right=NULL;
 }
 
void create(int n)
{
    mid*new,*temp;
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
void del(int n)
{
    mid*temp;
    int i,pos;
    printf("\nEnter the position from where the node has to be deleted :");
     scanf("%d",&pos);
    if(pos>1&&pos<n)
    {
        
        temp=header;
        for(i=2;i<=pos;i++)
        {
            temp=temp->right;
        }
        temp->right->left=temp->left;
        temp->left->right=temp->right;
        free(temp);
    }
    else
    {
      printf("Enter the correct position");
       
    }
}
 void display()
 {
     mid*temp;
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
    printf("\n\n:: DELETION OPERATION AT INTERMEDIATE ::\n\n");
    del(n);
    printf("\nNew linked list is ::");
    display();
    
}
