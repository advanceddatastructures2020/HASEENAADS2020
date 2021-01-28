#include<stdio.h>
struct disjset
{
int parent[10];
int rank[10];
int n;
}dis;
void makeset()
{
for(int i=0;i<dis.n;i++)
{
dis.parent[i]=i;
dis.rank[i]=0;
}}
void displayset()
{
printf("\nparent array\n");
for(int i=0;i<dis.n;i++)
{
printf("%d",dis.parent[i);
}
printf("\nrank array\n");
for(int i=0;i<dis.n;i++)
{
printf("%d",dis.parent[i);
}
printf("\n");
int find(int x)
{
if(dis.parent[x]!=x)
{
dis.parent[x]=find(dis.parent[x];
}
return disparent[x];
}
void union(int x, int y)
{
int xset=find(x);
int yset=find(y);
if(xset==yset)
{
return;
}
if(dis.rank[xset]<dis.rank[yset])
{
dis.parent[xset]=yset;
dis.rank[xset]=1;
}
else if(dis.rank[xset]>dis.rank[yset])
{
dis.parent[yset]=xset;
dis.rank[yset]=1;
}
else
{
dis.parent[yset]=yset;
dis.rank[xset]=dis.rank[xset]+1;
dis.rank[yset]=1;
}
}
int main()
{
int x,y,n;
printf("How many elemments");
scanf("%d",&n);
makeset();
int ch,wish;
do
{
printf("\n MENU\n1.UNION\n2.FIND\n3.DISPLAY\n");
printf("eter choice");
scanf("%d",&ch);
switch(ch)
{
cas 1:printf("enter elements to prform union");
scanf("%d%d",&x,&y);
union(x,y);
break;