#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

int n;
cin>>n;
bool ans=true;
int digit=0;
while (n!=0)
{
    digit=n%10;
    n=n/10;
    if(digit%2==0){
        ans=false;
        break;
    }
}

if(ans)
    cout<<"HAPPY"<<endl;
else
cout<<"SAD"<<endl;
}
