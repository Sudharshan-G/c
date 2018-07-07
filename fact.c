#include <stdio.h>
int main()
{
int n, i,factorial = 1;
scanf("%d",&n);
if (n < 0)
{
printf(" ");
else
{
for(i=1; i<=n; ++i)
 {
 factorial *= i;
 }
 printf("%d",factorial);
}
}
return 0;
}
