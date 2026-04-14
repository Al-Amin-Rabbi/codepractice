#include <bits/stdc++.h>
using namespace std;

int main()
{ 
   vector<int> vOdd,vEven;
   vector<int>::iterator it;
   int n;
   cin>>n;
  int x;
    for (size_t i = 0; i < n; i++)
    {
       cin>>x;
       if(x%2==0){
        vEven.push_back(x);
       }
       else if(x%2!=0){
        vOdd.push_back(x);
       }
    }
    sort(vOdd.begin(),vOdd.end());
    sort(vEven.begin(),vEven.end());
    for(int a:vOdd){
    cout<<a<<" ";
    }
    for (auto it = vEven.end()-1 ; it>=vEven.begin(); it--)
    {
        cout<<*it<<" ";
    }
    return 0;
   
}