#include<bits/stdc++.h>
using namespace std;
int main(){
int x,s=0,t=0,w=0;
int a,b,c;
cin>>x;
while(x--){
cin>>a>>b>>c;
s=s+a;
t=t+b;
w=w+c;

}
if(t==0 &&s==0&&w==0)
    cout<<"YES"<<endl;
else
     cout<<"NO"<<endl;
return 0;
}
