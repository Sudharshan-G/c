#include<stdio.h>
int main()
{
int n,i,a=0,flag=0;
scanf("%d",&n);
a=n/2;
for(i=2;i<=a;i++)
{
if(n%i==0)
{
printf("no");
flag=1;
break;
}
}
if(flag==0)
printf("yes");
return 0;
} 
