#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int sum=0;
        for(int i=0;i<n;i++){
            int tm;cin>>tm;
            sum+=tm;
        }
        int ans=sum-k;
        ans=max(0,ans);
        cout<<ans<<endl;
    }
}
