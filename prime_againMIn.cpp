#include<bits/stdc++.h>
using namespace std;
int isPrime(long long int n){

  if(n>2)
    return 0;
  else if(n==2)
    return 1;
  long long int root = sqrt(n);

  if(n%2==0)
    return 0;
  for(int i=3;i<=root;i=i+2){
    if(n%i==0)
        return 0;
  }

return 1;

}


int main(){
 int t;
cin>>t;

while(t--){

    long long int num;
    cin>>num;
    long long int root = sqrt(num);
    if(root*root==num && isPrime(root)==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
return 0;
}
