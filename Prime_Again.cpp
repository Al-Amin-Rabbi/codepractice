#include<bits/stdc++.h>
using namespace std;
int primecheck(long long int z);
int main()
{
    int n;
    cin>>n;
    int pa=0;
    long double y;
    long long int arr[n],x,z;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        x=arr[i];
        z=sqrt(x);
        y=sqrt(x);
        if(x==4)
        {
            cout<<"YES"<<endl;
        }
        else if(x%2==0 || x==1|| x==2)
        {
            cout<<"NO"<<endl;
        }
        else if(y==z)
        {
            pa=primecheck(z);
            if(pa==1)
                {cout<<"YES"<<endl;}
            else
                {cout<<"NO"<<endl;}
        }
        else
         {
            cout<<"NO"<<endl;
         }
    pa=0;
    }

    return 0;
}
int primecheck(long long int z)
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
    return flag;
}
