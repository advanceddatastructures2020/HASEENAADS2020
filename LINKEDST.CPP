#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<limits.h>
#define CAPACITY 10000
struct stack
{
int data;
struct stack *next;
} *top;
int size=0;
void push(int element);
int  pop();
void main()
{
int choice,data;
while(1)
{
printf("----------------------------\n");
printf("STACK IMPLEMENTATIN PROGRAMM\n");
printf("----------------------------\n");
printf("push");
printf("pop");
printf("size");
printf("exit");
printf("----------------------------\n");
printf("Enter the choice  ");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter data to push into the stack\n");
scanf("%d",&data);
push(data);
break;
case 2:
data=pop();
if(data!=INT_MIN)
printf("data=>%d\n",data);
break;
case 3:
printf("Stack size:%d\n",size);
break;
case 4:
printf("Exiting from app\n");
exit(0);
break;
default:
printf("Invalid choice,please try again.\n");
}
printf("\n\n");
}
}
void push(int element)
{   struct stack*newNode=(struct stack*) malloc(sizeof(struct stack));
if(size>=CAPACITY)
{
printf("Stack overflow,cannot add new eleents into the stack\n");
return;
}

newNode->data=element;
newNode->next=top;
top=newNode;
size++;
printf("Data pushed to stack\n");
}
int pop()
{
int data=0;
struct stack*topNode;
if(size<=0||!top)
{
printf("Stack is empty");
return INT_MIN;
}
topNode=top;
data=top->data;
top=top->next;
free(topNode);size--;
return data;
}