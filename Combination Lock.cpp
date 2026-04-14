#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,ans=0;
    cin>>N;
    string to,from;
   cin>>from>>to;

 for (int i = 0; i < to.size(); i++)
 {
  ans+=min(abs(to[i]-from[i]),10-(abs(to[i]-from[i])));
 }
   cout<<ans<<endl;

    return 0;
}
