#include<bits/stdc++.h>
using namespace std;
int main(){
int x;
cin>>x;
while(x--){
int a,b,tc=0;
cin>>a>>b;
for(int i=a;a<=b;i++){
    if((a%10)==0){
        tc++;
    }
}
cout<<tc<<"/"<<(b-a+1)<<endl;
}
return 0;
}
