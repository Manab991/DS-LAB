# include <stdio.h>
# include <conio.h>
int Q[1000];
int front, rear;
void enq(int N)
{
int data;
if(rear == N)
{
printf("\n Linear Queue is full");
return;
}
else
{
printf("\n Enter data: ");
scanf("%d", &data);
Q[rear] = data;
rear++;
printf("\n Data Inserted in the Queue ");
}
}
void deq()
{
if(rear == front)
{
printf("\n\n Queue is Empty..");
return;
}
else
{
printf("\n Deleted element from Queue is %d", Q[front]);
front++;
}
}
void displayQ()
{
int i;
if(front == rear)
{
printf("\n\n\t Queue is Empty");
return;
}
else
{
printf("\n Elements in Queue are: ");
for(i = front; i < rear; i++)
{
printf("%d\t", Q[i]);
}
}
}
int menu()
{
int ch;
printf("\n \tQueue operations using ARRAY..");
printf("\n -----------**********-------------\n");
printf("\n 1. Insert ");
printf("\n 2. Delete ");
printf("\n 3. Display");
printf("\n 4. Quit ");
printf("\n Enter your choice: ");
scanf("%d", &ch);
return ch;
}
void main()
{
int ch;
int N;
clrscr();
printf("\nEnter the capacity of the queue : ");
scanf("%d",&N);
do
{
ch = menu();
switch(ch)
{
case 1:
enq(N);
break;
case 2:
deq();
break;
case 3:
displayQ();
break;
case 4:
return;
}
} while(1);
getch();
}