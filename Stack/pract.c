# include <stdio.h>
# include <stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};
void push();
void pop();
void display();
typedef struct stack node;
node *start=NULL;
node *top = NULL;
node* getnode()
{
    node *temp;
    temp=(node *) malloc( sizeof(node)) ;
    printf("\n Enter data ");
    scanf("%d", &temp -> data);
    temp -> next = NULL;
    return temp;
}
void push()
{
    node *newnode;
    newnode=getnode();
    node *temp;
    if( newnode == NULL )
    {
        printf("\n Stack Overflow..");
        return;
    } 
    if(start == NULL)
    {
        start = newnode;
        top = newnode;
    }
    else
    {
        top -> next = newnode;
        top = newnode;
    }
    printf("\n\n\t Data pushed into stack");
}
void pop()

 {
    node *temp,*prev;
    if(top == NULL)
    {
        printf("\n\n\t Stack underflow");
        return;
    }
    prev=temp = start;
    if( start -> next == NULL)
    {
        printf("\n\n\t Popped element is %d ", top -> data);
        start = NULL;
        free(top);
        top = NULL;
    }
    else
    {   
        while(temp -> next != NULL)
        {
            prev=temp;
            temp = temp -> next;
        }
        temp = NULL;
        printf("\n\n\t Popped element is %d ", top -> data);
        free(top);
        top = prev;
        //  while(temp -> next != top)
        // {
        //     temp = temp -> next;
        // }
        // temp -> next = NULL;
        // printf("\n\n\t Popped element is %d ", top -> data);
        // free(top);
        // top = temp;
    }
}
void display()
{
    node *temp;
    if(top == NULL)
    {
        printf("\n\n\t\t Stack is empty ");
    }
    else
    {
        temp = start;
        printf("\n\n\n\t\t Elements in the stack: \n");
        while(temp != NULL)
        {
            printf("%d ", temp -> data);
            temp = temp -> next;
        }
    }   
}
int menu()
{
    int ch;
    printf("\n..YOUR OPTIONS ARE.. ");
    printf("\n 1. Push ");
    printf("\n 2. Pop ");
    printf("\n 3. Display");
    printf("\n 4. Quit ");
    printf("\n Enter your choice: ");
    scanf("%d",&ch);
    return ch;
}
void main()
{
    int ch;
    node *newnode;
    while(1)
    {
        ch = menu();
        switch(ch)
        {
            case 1 :
                push();
                break;
            case 2 :
                pop();
                break;
            case 3 :
                display();
                break;
            case 4:
                printf("\nOperation is ended");
                exit(0);
        }
    }
}