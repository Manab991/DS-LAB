#include<stdio.h>
#include<stdlib.h>
struct end_ins
{
    int data;
    struct end_ins*next;
};
typedef struct end_ins end;
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
        {  printf("%d\t",temp->data);
           temp=temp->next;
        }
       }
}
void insert()
{   end *new,*ptr;
     new=getnode();
    if(header==NULL)
        header=new;
    else
    {   ptr=header;
        while(ptr->next!=NULL)
             ptr=ptr->next;
        ptr->next=new;
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
    printf("\nOPERATION FOR INSERTION AT THE END  :\n");
    insert();
    printf("\nNEW linked list elements are:");
    display();
 }