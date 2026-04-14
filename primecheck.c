#include<bits/stdc++.h>
using namespace std;
int main()
{
   int flag=1;
    if(z==2)
        flag=1;
    else if(z%2==0 || z==1 || z==0)
        flag=0;
    else
    {
        for(int i=3; i<=sqrt(z); i=i+2)
        {
            if(z%i==0)
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    {printf("prime");}
    else
    {printf("not prime");}
    return 0;
}

