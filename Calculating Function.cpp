#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum;
    cin>>n;
    sum=n/2;
    if(n%2==0)
        cout<<sum;
        else
        cout<<sum-n;
return 0;
}
