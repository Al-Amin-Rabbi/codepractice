#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // cout.tie(0);



string a,b;
cin>>a>>b;
cout<<a.size()<<" "<<b.size()<<"\n";
cout<<a+b<<"\n";
char temp;
temp=a[0];
a[0]=b[0];
b[0]=temp;

cout<<a<<" "<<b<<"\n";

return 0;}