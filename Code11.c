#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int x = a, y = b, i = 2;

    if (a > b)
    {
        a = a;
        b = b;
    }
    else
    {
        int temp = a;
        a = b;
        b = temp;
    }
    while (1)
    {
        if (a % b == 0)
        {
            break;
        }
        else
            a = a * i;
        i++;
    }
    printf("The LCM of %d and %d is %d.", x, y, a);
    return 0;
}
