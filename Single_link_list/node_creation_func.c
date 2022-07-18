#include<stdio.h>
#include<stdlib.h>
struct creation
{
    int data;
    struct creation*next;
};
typedef struct creation cre;
cre*header=NULL;
cre*getnode()
{
    cre*newnode;
    newnode=(cre*)malloc(sizeof(cre));
    printf("Enter the data of node :");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
   
}

void create(int n)
{
    int i;
    cre*new,*temp;
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
    cre*temp;
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
    printf("\nLinked list elements are : ");
    display();
    
 }