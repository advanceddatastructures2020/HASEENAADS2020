//Merging of two sorted array
#include<stdio.h>
void main()
{
clrscr();
int array1[50],array2[50],array3[100],m,n,i,j,k=0;
printf("Enter the size of the first array");
scanf("%d",&m);
printf("\n Enter the sorted elements of array1");
for(i=0;i<m;i++)
{
scanf("%d",&array1[i]);
}
printf("Enter the size of the second array");
scanf("%d",&n);
printf("\n Enter the sorted elements of array1");
for(i=0;i<n;i++)
{
scanf("%d",&array2[i]);
}
i=0;
j=0;
while(i<m&&j<n)
if(array1[i]<array2[j])
{
array3[k]=array1[i];
i++;
}
else
{
array3[k]=array2[j];
j++;
}
k++;
}
if(i>=m)
{
while(j<n)
{
array3[k]=array2[j];
j++;
k++;
}
}
if(j>=n)
{
while(i<m)
{
array3[k]=array1[i];
j++;
k++;
}
}
printf("after merging\n");
for(i=0;i<m+n;i++)
{
printf("\n%d",array3[i]);
}
getch();
}