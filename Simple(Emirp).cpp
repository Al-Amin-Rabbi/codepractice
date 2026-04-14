#include<bits/stdc++.h>
using namespace std;
int primecheck(long long int z);
int emirpcheck(long long int z);
int main()
{
    long long int z;
    while((scanf("%lld",&z))==1)
        if(primecheck(z)==0)
        {
            cout<<z<<" is not prime."<<endl;
        }
        else if(primecheck(z)==1)
        {
            if(emirpcheck(z)==1)
            {
                cout<<z<<" is emirp."<<endl;
            }
            else
            {
                cout<<z<<" is prime."<<endl;
            }
        }
            return 0;
        }
    int primecheck(long long int z)
    {
        long long int x;
        int flag=1;
        if(z==2)
            flag=1;
        else if(z%2==0 || z==1 || z==0)
            flag=0;
        else
        {
            x=sqrt(z);
            for(int i=3; i<=x; i=i+2)
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
int emirpcheck(long long int z)
    {   long long int n=z;
        int flag=1;
        int reversed_number = 0, remainder;
        while(z != 0)
        {
            remainder = z % 10;
            reversed_number = reversed_number * 10 + remainder;
            z /= 10;
        }
        if(reversed_number==n)
        {
            return 0;
        }
        flag=primecheck(reversed_number);
        return flag;
    }
