# include <stdlib.h>
# include <stdio.h>
struct queue
{
int data;
struct queue *next;
};
typedef struct queue node;
node *front = NULL;
node *rear = NULL;
node* getnode()
{
node *temp;
temp = (node *) malloc(sizeof(node)) ;
printf("\n Enter data ");
scanf("%d", &temp -> data);
temp -> next = NULL;
return temp;
}
void enq()
{
node *newnode;
newnode= getnode();
if(newnode== NULL)
{
printf("\n Queue is Full");
return;
}
if(front == NULL)
{
front = newnode;
rear=newnode;
}
else
{
rear -> next = newnode;
rear=newnode;
}
printf("\n\n\t Data Inserted into the Queue..");
}
void deq()
{
node *temp;
if(front == NULL)
{
printf("\n\n\t Queue is empty");
return;
}
temp = front;
front = front -> next;
printf("\n\n\t Deleted element from queue is %d ", temp -> data);
free(temp);
}
void display()
{
node *temp;
if(front == NULL)
{
printf("\n\n\t\tQueue is empty");
}
else
{
temp = front;
printf("\n\n\n\t\t Elements in the Queue are: ");
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
printf("\n \tYOUR OPTIOND ARE : ");
printf("\n 1. Insert ");
printf("\n 2. Delete ");
printf("\n 3. Display");
printf("\n 4. Quit ");
printf("\n Enter your choice: ");
scanf("%d",&ch);
return ch;
}
void main()
{
int ch;
while(1)
{
ch = menu();
switch(ch)
{
case 1 :
enq();
break;
case 2 :
deq();
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