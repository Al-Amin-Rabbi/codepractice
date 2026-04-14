#include<bits/stdc++.h>
using namespace std;
int main(){

int a=64 ,b=18;


while(a!=b){
    if(a>b)
    a=a-b;
    else
    b=b-a;
}
cout<<a;
}