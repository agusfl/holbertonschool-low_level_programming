#include <stdio.h>

int main()
{
int x = 0, y = 1, z, sumeven = 0;

while (y < 4000000)
{
    z = x + y;
    x = y;
    y = z;
   
    if (y % 2 == 0)
    {
        sumeven += y;
    }
}
printf("%d\n", sumeven);
return 0;
}
