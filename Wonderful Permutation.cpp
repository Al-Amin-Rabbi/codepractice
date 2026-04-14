#include<bits/stdc++.h>
using namespace std;
int main()
{
 int x;
 cin>>x;
 while(x--){
    int n,k,z=0;
    cin>>n>>k;
    int y[n];
    for(int i=0;i<n;i++){
    cin>>y[i];
    }
    if(n==k)
        cout<<"0"<<endl;
    else
    {
       for(int i=0;i<k;i++){
    if(k<y[i])
        z++;
    }
    cout<<z<<endl;
    }

 }
 return 0;
}
