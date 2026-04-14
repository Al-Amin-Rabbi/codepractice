#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // cout.tie(0);
int n,q;
cin>>n>>q;
vector<vector<long long int>> arr(n);
int lastAnswer=0;
vector<int>ans;
int x,y,query;
while(q--){
cin>>query>>x>>y;
if(query==1){
     int idx=((x^lastAnswer)%n);
    arr[idx].push_back(y);
}
else if(query==2){
   int idx=((x^lastAnswer)%n);
   lastAnswer=arr[idx][y%(arr[idx].size())];
   ans.push_back(lastAnswer);
}
}

for (int i = 0; i < ans.size(); i++)
{
    cout<<ans[i]<<"\n";
}
return 0;
}