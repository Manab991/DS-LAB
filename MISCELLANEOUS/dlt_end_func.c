#include<stdio.h>
#include<stdlib.h>
struct end_dlt
{
    int data;
    struct end_dlt*next;
};
typedef struct end_dlt end;
end*header=NULL;
end*getnode()
{
    end*newnode;
    newnode=(end*)malloc(sizeof(end));
    printf("Enter the data of the node :");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
}

void create(int n)
{
    int i;
    end*new,*temp;
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
    end*temp;
    if(header==NULL)
        printf("The list is empty");
    else
       { temp=header;
         while(temp!=NULL)
        {  printf("%d \t",temp->data);
           temp=temp->next;
        }
       }
}
void delete()
{   end *prev,*ptr;
    if(header==NULL)
        printf("Linked list is already empty");
    else
    {   prev=ptr=header;
        while(ptr->next!=NULL)
           {  prev=ptr;
             ptr=ptr->next;}
        prev->next=NULL;
        free(ptr);
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
    printf("\n\nOPERATION FOR DELETION AT THE END  :\n");
    delete();
    printf("\nNEW linked list elements are:");
    display();
 }