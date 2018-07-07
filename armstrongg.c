#include <stdio.h>
int main()
{
int number, originalNumber, remainder, result = 0;
scanf("%d", &number);
originalNumber = number;
while (originalNumber<=100000)
{
remainder = originalNumber%10;
result += remainder*remainder*remainder;
originalNumber /= 10;
}
if(result == number)
{
printf("yes");
{
else
{
printf("no");
return 0;
}
}
