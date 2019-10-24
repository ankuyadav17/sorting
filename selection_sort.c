#include<stdio.h>

int main()
{
int i,min,j,a[10]={5,3,6,8,9,33,2,1,7,4};

for(i=0;i<10;i++)
{ min=i;
for(j=i+1;j<10;j++)
{
if(a[j]<=a[min])
{
int swap=a[j];
a[j]=a[min];
a[min]=swap;
}
}
}
for(i=0;i<10;i++)
printf("%d ",a[i]);

}
