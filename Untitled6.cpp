#include<bits/stdc++.h>
using namespace std;

int arr[10000];

int rec(int n)
{

    if(n==1) return arr[1];
    else if(n==2) return arr[2];
    else if(n==3) return arr[3];
    else if(arr[n]==-1) return arr[n]=rec(n-1)+rec(n-2)+2*rec(n-2);

    else if(n!=-1) return arr[n];
}


int main()
{ int n;
   cin>>n;
for(int i=0; i<9999; i++)
    {
        arr[i]=-1;
    }
    arr[1]=1;
    arr[2]=3;
    arr [3]=5;
    cout<<rec(n);
}
