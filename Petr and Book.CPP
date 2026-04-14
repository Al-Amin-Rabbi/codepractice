#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, arr[7];
    cin>>N;
    for(int i=0; i<7; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<7; i++)
    {
        N-=arr[i];
        if(N<=0)
        {
            cout<<i+1<<endl;
            break;
        }
        if(i==6)
            i=-1;
    }
    return 0;
}
