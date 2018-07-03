#include<stdio.h>
int main()
{
int i, prime,n1,n2, n;
scanf("%d", &n2);
scanf("%d", &n1);
for(n=n2+1; n<n1; n++)
{
prime = 1;
for(i=2; i<n/2; i++)
if(n%i == 0)
{
prime = 0;
break;
}
if(prime)
printf("\t%d", n);
}
}
