
#include<bits/stdc++.h>
using namespace std;
int primecheck(int n);
int emirp_check(int n);
int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        if(primecheck(n)==0)
        {
            printf("%d is not prime.\n",n);
        }
        else if(emirp_check(n)==1)
        {
            printf("%d is emirp.\n",n);

        }
        else
        printf("%lld is prime.\n",n);


    }
    return 0;
}
int primecheck(int n)
{
    int flag=1;
    if(n%2==0 && n!=2 )
        flag=0;
    else
    {
        for(int i=3; i<=n/2; i++)
        {
            if(n%i==0)
            {
                flag=0;
            }
        }
    }
    return flag;
}
int emirp_check(int n)
{
    int reversed_number = 0,remainder;
    while(n != 0)
    {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }
    if(reversed_number==n)
        return 1;
    else
    return primecheck(reversed_number);
}
