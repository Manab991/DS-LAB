#include<stdio.h>
#include<stdlib.h>
struct ins_mid
{
 int data;
 struct ins_mid*right;
 struct ins_mid*left;
};
typedef struct ins_mid mid;
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
void ins(int n)
{
    mid*new,*temp;
    int i,pos;
    printf("\nEnter the position where new node have to inserted ::");
    scanf("%d",&pos);
    if(pos>1&&pos<n)
    {
        new=getnode();
        temp=header;
        for(i=2;i<pos;i++)
        {
            temp=temp->right;
        }
        new->right=temp->right;
        temp->right->left=new;
        new->left=temp;
        temp->right=new;
    }
    else
        printf("Enter the correct position between 1 and %d",n);
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
    printf("\n\n:: INSERTION OPERATION AT INTERMEDIATE ::\n\n");
    ins(n);
    printf("\nNew linked list is ::");
    display();
    
}
