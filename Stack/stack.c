# include<stdlib.h>
# include <stdio.h> 
int stack[1000];
int top = 0;
int menu()
{
int ch;
printf("\n OPERATIONS ARE - ");
printf("\n 1. Push ");
printf("\n 2. Pop ");
printf("\n 3. Display");
printf("\n 4. Quit ");
printf("\n Enter your choice: ");
scanf("%d", &ch);
return ch;
}
void display()
{
int i;
if(top == 0)
{
printf("\n\nStack empty..");
return;
}
else
{
printf("\n\nElements in stack:");
for(i = 0; i < top; i++)
printf("\t%d", stack[i]);
}
}
void pop()
{
if(top == 0)
{
printf("\n\nStack Underflow..");
return;
}
else
{
    top=top-1;
    printf("\n\npopped element is: %d ", stack[top]);
}
}
void push(int N)
{
int data;
if(top == N)
{
printf("\n\nStack Overflow..");
return;
}
else
{
printf("\n\nEnter data: ");
scanf("%d", &data);
stack[top] = data;
top = top + 1;
printf("\n\nData Pushed into the stack");
}
}
void main()
{
int ch;
int N;
printf("\nEnter the capacity of the stack : ");
scanf("%d",&N);
do
{
ch = menu();
switch(ch)
{
case 1:
push(N);
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
exit(0);
}
} while(1);
}