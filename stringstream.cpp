#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
 
  int a;
   string str;
   cin>>str;
   stringstream ss(str);
   vector<int> x;
   char ch;
   while(ss>>a>>ch){
    x.push_back(a);
   }
   ss>>a;
   x.push_back(a);
   for(auto y: x){
    cout<<y<<endl;
   }
  return 0;
}