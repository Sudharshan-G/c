
#include<stdio.h>
int main()
{
int a[10],i,j,temp,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
temp=a[0];
for(i=0;i<n;i++)
{
if(temp>a[i])
{
temp=a[i];
}
}
printf("%d",temp);
return 0;
}
