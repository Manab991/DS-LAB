#include<stdio.h>
#include<stdlib.h>
struct beg_ins
{
    int data;
    struct beg_ins*next;
};
typedef struct beg_ins beg;
beg*header=NULL;
beg*getnode()
{
    beg*newnode;
    newnode=(beg*)malloc(sizeof(beg));
    printf("Enter the data of the node :");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
}

void create(int n)
{
    int i;
    beg*new,*temp;
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
    beg*temp;
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
void insert()
{    beg*new;
     new=getnode();
    if(header==NULL)
        header=new;
    else
    {
        new->next=header;
        header=new;
    }
}
 void main()
 {
    int n;
    printf("\nEnter how many nodes are present in previous node :");
    scanf("%d",&n);
    create(n);
    printf("\nPrevious linked list elements are:");
    display();
    printf("\nINSERTION OPERATION :\n");
    insert();
    printf("\nNEW linked list elements are:");
    display();
 }