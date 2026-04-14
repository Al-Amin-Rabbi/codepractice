#include<stdio.h>
void fun(const int *arr);
void main()
{
    int arr[5];
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    fun(arr);
    return 0;
}
void fun(const int *arr)
{
    for(int i=0; i<5; i++)
    {
        printf("\n%d=",arr[i]);
        for(int j=1; j<=arr[i]; j++)
        {
            if(arr[i]%j==0)
                printf("%d,",j);
        }

    }
}
