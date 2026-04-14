#include<bits/stdc++.h>
using namespace std;
int gcd(long long int x,long long int y);
int main(){
int a;
cin>>a;
while(a--){
long long int x,y,G,L;
cin>>x>>y;
G=gcd(x,y);
L=(x*y)/(G);
cout<<G<<" "<<L<<endl;
}
return 0;
}
int gcd(long long int x,long long int y){
if(y==0)
  return x;
  else
  return gcd(y,x%y);
}
