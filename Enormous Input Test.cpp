#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    int z=0;
    cin>>x>>y;
    while(x--)
    {

        long int a;
        cin>>a;
        if(a%y==0)
        {
            z++;
        }
    }
    cout<<z<<endl;
    return 0;
}
