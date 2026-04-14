#include<bits/stdc++.h>
using namespace std;
int main()
{

    int x;
    cin>>x;
    while(x--)
    {
        char arr[10];
        cin>>arr;
        if(arr[0]=='o' && arr[1]=='n' ||
           arr[0]=='o' && arr[2]=='e' ||
           arr[1]=='n' && arr[2]=='e' )
        {
            cout<<"1"<<endl;
            continue;
        }
        else if(strlen(arr)==5)
        {
           cout<<"3"<<endl;
            continue;

        }
        else
        {
            cout<<"2"<<endl;
            continue;
        }

    }

    return 0;
}
