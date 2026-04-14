#include<bits/stdc++.h>
using namespace std;
int main()
{
    int long long k,n,w,sum=0;
    cin>>k>>n>>w;
    while(w!=0){
        sum=sum+k*w;
        w--;
    }
    if(sum>n){
    cout<<sum-n<<endl;
    }
    else
    cout<<"0"<<endl;
return 0;
}
