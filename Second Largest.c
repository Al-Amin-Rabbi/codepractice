#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    int arr[x][3];
    for (int i=0; i<x; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        for(int j=0; j<1; j++)
        {
            if(arr[i][j]>arr[i][j+1] && arr[i][j]<arr[i][j+2] ||
                    arr[i][j]<arr[i][j+1] && arr[i][j]>arr[i][j+2])
                arr[i][j]=arr[i][j];
            else if(arr[i][j+1]>arr[i][j] && arr[i][j+1]<arr[i][j+2] ||
                    arr[i][j+1]<arr[i][j] && arr[i][j+1]>arr[i][j+2])
                arr[i][j]=arr[i][j+1];
            else
                arr[i][j]=arr[i][j+2];
        }
        printf("\n");
    }
    for (int i=0; i<x; i++)
    {
        for(int j=0; j<1; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");

    }
}
