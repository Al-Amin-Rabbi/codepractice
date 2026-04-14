#include<bits/stdc++.h>
using namespace std;
int main(){
int n,h,count=0;
cin>>n>>h;
while(n--){
int x;
cin>>x;
if(x>h){
    count=count+2;
    continue;
}
count++;
}
cout<<count<<endl;
}