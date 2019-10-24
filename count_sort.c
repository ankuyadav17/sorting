#include<stdio.h>

int main()
{
int i,j;

int b[10]={10,9,8,7,7,5,4,4,2,2};
int a[11]={0} //max value is 10 so take array of size 11
for(i=0;i<10;i++)
{
a[b[i]]++;

}
for (i=0;i<11;i++)
{if(a[i]==0)
continue;
else
for(j=0;j<a[i];j++)
printf("%d ",i);
}
}
