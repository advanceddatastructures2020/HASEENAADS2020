#include<stdio.h>
void input();
void output();
void setunion();
void intersection();
vid difference();
int a[]={0,0,0,0,0,0,0,0,0},b[]=(0,0,0,0,0,0,0,0,0}
int main()
{
int ch,wish;
do
{
printf("\n MENU\n");
{
printf("1.input,2.union,3.interection,4.difference\nentr choice");
scanf("%d",&ch);
switch(ch)
{
case1:input();
break;
case1:setunion();
break;
case1:intersection();
break;
case1:difference();
break;
printf("\nDo you wish to continue?(1\0)\n");
scanf("%d",&wish);
}
while(wish==1);
}
void input()
{

int n,x,i;
printf("enter the size of the first set");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf(%d",&x);
a[x-1]=1;
}
printf("enter the size of the secondset");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf(%d",&x);
b[x-1]=1;
}
printf("\n 1st set\n");
for(i=0;i<9;i++)
{
printf("%d",a[i])
}
printf("\n 1st set\n");
for(i=0;i<9;i++)
{
printf("%d",b[i])
}
void output()
{
int i;
printf("set is");
for(i=0;i<9;i++)
{
if(c[i]!=0)
printf("%d",i+1);
}
void setunion()
{
int i,c[10];
printf("set is");
for(i=0;i<9;i++)
{
if(a[i]!=b[i])
c[i]=1;
else c[i]=a[i];
}
for(i=0;i<9;i++)
{
printf("%d",c[i]);
}
output(c);
}
void intersection()
{
int i,c[10];
for(i=0;i<9;i++)
{
if(a[i]==b[i])
c[i]=a[i];
else c[i]=0;
}
for(i=0;i<9;i++)
{
printf("%d",c[i]);
}
output(c);
}
void difference()
{
int i,c[10];
for(i=0;i<9;i++)
{
if(a[i]==1&&b[i]==0)
c[i]=1;
else c[i]=0;
}
for(i=0;i<9;i++)
{
printf("%d",c[i]);
}
output(c);
}
