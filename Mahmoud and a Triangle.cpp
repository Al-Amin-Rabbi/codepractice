#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int arr[x];
    int tc=0;
    for(int i=0; i<x; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+x);
    for(int i=0; i<x-2; i++)
    {
        if(arr[i]+arr[i+1]>arr[i+2])
        {
            cout<<"YES"<<endl;
            tc=1;
            break;
        }

    }
    if(tc==0)
    cout<<"NO"<<endl;
    return 0;
}
