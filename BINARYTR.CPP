#include<stdio.h>
#include<stdlib.h>
struct btnode
{
int value;
struct btnode*l;
struct btnode*r;
}*root=NULL,*temp=NULL,*t2,*t1;
void delete1();
void insert();
void delete();
void inorder(struct btnode *t);
void create();
void search(struct btnode*t);
void preorer(struct btnode*t);
void search1(struct btnode*t int data);
int smallest(struct btnode *t);
int largst(strct btnode*t);
int flag=1;
void main()
{
int ch;
printf("OPERATIONS\n 1.INsert\n2.deletion\n3.inorder traversal\n4.preorer traversal\n5.postoder traversal\n6.exit\n);
while(1)
{
printf("enter your hoice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
delete();

break;
case 3:
inorder();
break;
case 4:
preorder();
case 5:
postorder();
break;
case 6:
exit(0);
default:
printf(("Wrong chhoice\n");
break;
}}}
vid insert()
{
create();
if(r00t==NULL)
root=temp;
else
search(root);
}
void create()
{
int data;
printf("enter data  of node to be inserted\n");
scanf("%d",&data);
temp=(struct btnnode*)malloc(1*sizeof(struct btnode));
temp->value=data;
temp->1=temp->r=NULL;
}
void search(struct btnode*t)
{
if((temp->value>t->value)&&(t->r!=NULL))
search(t->r);
else if((temp->value>t->value)&&(t->r==NULL))
t->r=temp;
else if((temp->value>t->value)&&(t->1!=NULL))
search(t->1);
else if((temp->value>t->value)&&(t->1==NULL))
t->1=temp;