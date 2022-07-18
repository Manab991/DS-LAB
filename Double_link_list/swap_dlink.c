#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*left;
    struct node*right;
};
typedef struct node node;
node*start=NULL;
node*getnode

{
    node*new;
    new=(node*)malloc(sizeof(node));
    printf("The value of the node :");
    scanf("%d",&new->data);
    new->left=NULL;
    new->right=NULL;
    return new;
}
int create(int n)
{
    node*newnode,*temp;
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
     node*ptr;
    if(start==NULL)
        printf("The list is empty");
    else
       { ptr=start;
         while(ptr!=NULL)
        {  printf("%d\t",ptr->data);
           ptr=ptr->right;
        }
       }
}
void swap(int n)
{
    node*prev,*temp,*x,*y,*z,*w,*ptr;
    int n1,n2;
    int i;
    int a,b;
    printf("\nEnter which two numbers have to swap ::");
    scanf("%d%d",&n1,&n2);
   if(n1<=n && n2<=n)
   {
        temp=prev=start;
        for(i=0;i<n1;i++)
        {
            prev=prev->right;
            printf("%d\t",prev->data);
        }
        
        
        for(i=0;i<n2;i++)
        {
            temp=temp->right;
            printf("%d\t",temp->data);
        }
        /*x=temp->right;
        y=temp->left;
        z=temp->left->right;
        w=temp->right->left;
        temp->right=prev->right;
        temp->left=prev->left;
        prev->right->left=temp;
        prev->left->right=temp;
        prev->right=x;
        prev->left=y;
        z=prev;
        w=prev;*/

   }
   else
    printf("Enter the correct postion of nodes to swap");
}
void main()
 {
    int n;
    printf("\nEnter how many nodes have to create: ");
    scanf("%d",&n);
    create(n);
    printf("\n Double Linked list elements are : ");
    display();
    printf("\nLinked list after swapping");
    swap(n);
    display();
    
    
 }

