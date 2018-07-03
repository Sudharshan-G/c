#include<stdio.h>
int main()
{
int n1,n2,q=100000,i;
scanf("%d%d",&n1,&n2);
if(n2<q)
{
for(i=n1+1;i<=n2;i++)
{
if(i%2!=0)
{
printf("%d\t",i);
}
}
}
}
