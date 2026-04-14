#include<bits/stdc++.h>
using namespace std;
int main(){

int n,a=0,b;
cin>>n;
b=n%10;
while (n!=0)
{
a=n%10;
if(a>b){
   b=a;
}
n=n/10;
}
cout<<b<<endl;

}