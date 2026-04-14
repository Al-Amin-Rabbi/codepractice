#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int arr[N],arr1[N];
    for (size_t i = 0; i < N; i++)
    {
        cin>>arr[i];
        arr1[i]=arr[i];
    }
    sort(arr1,arr1+N);
    for (size_t i = 0; i < N; i++)
    {
        if(arr[i]==arr1[N-1]){
            cout<<arr1[N-2]<<endl;
        }
        else
        cout<<arr1[N-1]<<endl;
    }

}