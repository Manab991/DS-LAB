#include<stdio.h>
#include<stdlib.h>
struct ins_end
{
 int data;
 struct ins_end*right;
 struct ins_end*left;
};
typedef struct ins_end end;
end*header=NULL;
 end*getnode()
 {
     end*newnode;
     newnode=(end*)malloc(sizeof(end));
     printf("\nNODE'S VALUE :");
     scanf("%d",&newnode->data);
     newnode->left=NULL;
     newnode->right=NULL;
 }
void create(int n)
{
    end*new,*temp;
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
    end*new,*temp;
    new=getnode();
    if(header==NULL)
    {
        header=new;
    }
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
 void display()
 {
     end*temp;
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
    printf("\n\n:: INSERTION OPERATION AT END ::\n\n");
    ins();
    printf("\nNew linked list is ::");
    display();
    
}
