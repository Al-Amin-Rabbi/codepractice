#include<bits/stdc++.h>
using namespace std;
int main()
{
int x;
cin>>x;
while(x--){
long long int n,m,s1,s2;
cin>>n>>m;
s1=(m*(long long int)(m+1)/2);
s2=(m)*(n*(long long int)(n+1)/2)-m;

cout<<s1+s2<<endl;
}
return 0;
}
