#include<stdio.h>

int main()
{
int i,j,a[10]={5,3,6,8,9,33,2,1,7,4};

for(i=0;i<10;i++)
{
for(j=0;j<10;j++)
{
if(a[j]>a[j+1])
{int t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
for(i=0;i<10;i++)
printf("%d ",a[i]);

}
