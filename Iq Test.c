#include<stdio.h>
int main()
{
    int n[100];
    int x,odd=0,even=0,z;
    scanf("%d",&x);
    for(int i=0; i<x; ++i)
    {
        scanf("%d",&n[i]);
        if((n[i]%2)==0)
        {
            even++;
        }
        if((n[i]%2)!=0)
        {
            odd++;
        }

    }
    if(even>1)
    {
        for(int i=0; i<x; i++)
        {
            if((n[i]%2)!=0)
            {
                z=i+1;
                break;
            }
        }
    }
    else if(odd>1)
    {
        for(int i=0; i<x; i++)
        {
            if((n[i]%2)==0)
            {
                z=i+1;
                break;
            }
        }
    }
    printf("%d",z);
}

