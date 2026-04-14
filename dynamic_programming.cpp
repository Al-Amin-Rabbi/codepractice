#include<bits/stdc++.h>
using namespace std;

int arr[10000];

int rec(int n)
{

    if(n==1) return arr[1];
    else if(n==2) return arr[2];
    else if(arr[n]!=-1) return arr[n];
    else if(arr[n]==-1) return arr[n]=rec(n-1)+rec(n-2);

}


int main()
{ int n;
   cin>>n;
for(int i=0; i<9999; i++)
    {
        arr[i]=-1;
    }
    arr[1]=1;
    arr[2]=2;
    cout<<rec(n);
}
