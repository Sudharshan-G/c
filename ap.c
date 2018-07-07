#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int first, diff, terms, value, sum=0, i;

   
    scanf("%d", &terms);

   
    scanf("%d %d", &first, &diff);

    value = first;
    
    for(i = 0; i < terms; i++) 
    {
        printf("%d ", value);
        sum += value;
        value = value + diff;
    }

    printf("\n  %d\n",  sum);

    getch();
 return 0;
}
