#include<bits/stdc++.h>
using namespace std;
int main(){
int n, k, l, c, d, p, nl, np,x,y,z;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
x=(k*l)/nl;
y=c*d;
z=p/np;
if(x<y && x<z){
  cout<<x/n;
}
else if(y<x && y<z){
    cout<<y/n;
    }
    else {
       cout<<z/n;
    }
return 0;
}
