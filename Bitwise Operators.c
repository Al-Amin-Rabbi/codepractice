#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, k, ans1 = 0, ans2 = 0, ans3 = 0, temp1 = 0, temp2 = 0, temp3 = 0;
    scanf("%d %d", &n, &k);
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            temp1 = i & j;
            temp2 = i | j;
            temp3 = i ^ j;
            if (temp1 >= ans1 && temp1 < k)
            {
                ans1 = temp1;
            }
            if (temp2 >= ans2 && temp2 < k)
            {
                ans2 = temp2;
            }
            if (temp3 >= ans3 && temp3 < k)
            {
                ans3 = temp3;
            }
        }
    }

    printf("%d \n%d \n%d \n", ans1, ans2, ans3);
    return 0;
}