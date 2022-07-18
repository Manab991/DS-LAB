#include<stdio.h>
#include<stdlib.h>
struct creation
{
    int data;
    struct creation*left;
    struct creation*right;
};
typedef struct creation cre;
cre*start=NULL;
cre*getnode()
{
    cre*new;
    new=(cre*)malloc(sizeof(cre));
    printf("The value of the node :");
    scanf("%d",&new->data);
    new->left=NULL;
    new->right=NULL;
}
int create(int n)
{
    cre*newnode,*temp;
    int i;
    for(i=0;i<n;i++)
    {
        newnode=getnode();
        if(start==NULL)
        start=newnode;
        else
        {
            temp=start;
            while(temp->right!=NULL)
            temp=temp->right;
            temp->right=newnode;
            newnode->left=temp;
            
        }
    }
}
void display()
{
     cre*temp;
    if(start==NULL)
        printf("The list is empty");
    else
       { temp=start;
         while(temp!=NULL)
        {  printf("%d\t",temp->data);
           temp=temp->right;
        }
       }
}
void main()
 {
    int n;
    printf("\nEnter how many nodes have to create: ");
    scanf("%d",&n);
    create(n);
    printf("\n Double Linked list elements are : ");
    display();
    
 }

