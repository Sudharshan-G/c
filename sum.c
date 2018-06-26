#include <stdio.h>
int main()

{
    int i, num, sum1 = 0;
    scanf ("%d", &num);
    for (i = 1; i <= num; i++)
    {
        sum1 = sum1 + i;
    }

    printf ("%d",sum1);
    return 0;
}
