#include<bits/stdc++.h>
using namespace std;
int main(){

string str="alamin";
map<char,int>m;
map<char,int>::iterator itr;
m['a']=10;
m['f']=50;
m['g']=60;
m['k']=70;
m['y']=80;

for (itr=m.begin();itr!=m.end();itr++){
    cout<<itr->first<<" "<<itr->second<<endl;
}



}
