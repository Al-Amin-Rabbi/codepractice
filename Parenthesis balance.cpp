#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0;
    stack<char> s;
    char str[128];
    cin>>str;
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]=='(')
            s.push('(');

        else if(str[i]==')' && !s.empty())

            s.pop();

        else if(str[i]==')' && s.empty())
            flag=1;

    }
    if(flag==0 && s.empty())
        cout<<"Balanced"<<endl;
    else
        cout<<"Not Balanced"<<endl;

}
