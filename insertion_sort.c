#include<stdio.h>

int main()
{
int a[10]={5,4,3,6,7,8,1,9,76,89};
int i,j,key;
for(j=1;j<10;j++)
{
key=a[j];
i=j-1;
while(i>=0 && a[i]>key)
{
a[i+1]=a[i];
i=i-1;
}
a[i+1]=key;
}
for(i=0;i<10;i++)
printf("%d ",a[i]);
}
