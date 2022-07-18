#include<stdio.h>
#include<stdlib.h>
struct traverse
{
    int data;
    struct traverse*next;
};
typedef struct traverse tra;
tra*header=NULL;
tra*getnode()
{
    tra*newnode;
    newnode=(tra*)malloc(sizeof(tra));
    printf("Enter the data of node :");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
   
}

void create(int n)
{
    int i;
    tra*new,*temp;
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
void trav()
{
    tra*temp;
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
 void main()
 {
    int n;
    printf("\nEnter how many nodes have to create: ");
    scanf("%d",&n);
    create(n);
    printf("\nTRAVERSING OPERATION : ");
    printf("\nLinked list elements are : ");
    trav();
    
 }