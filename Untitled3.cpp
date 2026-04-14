#include<bits/stdc++.h>
using namespace std;
int main(){

string str="Hello Bashundhara Hello Hi";
map<char,int>m;
map<char,int>::iterator itr;
for(int i=0;i<str.length();i++)
{
    m[str[i]]=++m[str[i]];
}
int max=0;
char c;
for (itr=m.begin();itr!=m.end();itr++){
    cout<<itr->first<<" "<<itr->second<<endl;
}
for(itr=m.begin();itr!=m.end();itr++ )
    {

        if(itr->second >max)
        {
            max=itr->second;
            c = itr->first;
        }
    }

cout<<c<<endl;

}



