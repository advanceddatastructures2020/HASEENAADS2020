#include<stdio.h>
#include<conio.h>
void main()
{
int a,number[30],i,j,n;
clrscr();
printf("Enter the size of the array");
scanf("%d",&n);
printf("Enter the elements of the array");
for(i=0;i<n;i++)
{
scanf("%d",&number[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(number[i]>number[j])
{
a=number[i];
number[i]=number[j];
number[j]=a;
}
}
}
printf("\nThe sorted array is");
for(i=0;i<n;i++)
{
scanf("%d\n",number[i]);
}
getch();
}
