#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num1,num2,sum,sub,mul,div,ch;
printf("enter two numbers\n");
scanf("%d%d",&num1,&num2);
printf("Enter your choice \n1.addition\n2.subtraction\n3.Multiplication\n4.Division\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
sum=num1+num2;
printf("Addition=%d",sum);
break;
case 2:
sub=num1-num2;
printf("subtraction=%d",sub);
break;
case 3:
mul=num1*num2;
printf("multiplication=%d",mul);
break;
case 4:
div=num1/num2;
printf("Division=%d",div);
break;
default:
printf("Invalid choice");
break;
}
getch();
}