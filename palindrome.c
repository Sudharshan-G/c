#include <stdio.h>
int main()
{
int n, r = 0, a, t;
scanf("%d", &n);
t = n;
while( n!=0 )
{
a = n%10;
r = r*10 + a;
n /= 10;
}
if (t == r)
printf("yes");
else
printf("no");
return 0;
}



























