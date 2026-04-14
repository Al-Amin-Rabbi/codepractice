#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,x,flag=0;
    stack<char> s;
    cin>>x;
    char str[x][128];
    for(i=0; i<x; i++)
    {
        for(j=0; j<strlen(str[i]); j++)
            cin>>str[i][j];
    }
    for(i=0; i<x; i++);
    {
        for(j=0; j<strlen(str[i]); j++)
            cout<<str[i];
    }
    /*  for(i=0; i<x; i++)
      {
          for(j=0; j<strlen(str[i]); j++)
          {
              if(str[i]=='(')
                  s.push('(');
              else if(str[i]=='[')
                  s.push('[');
              else if(str[i]==')' && !s.empty())
              {
                  if(s.top()=='(')
                      s.pop();
                  else
                      flag=1;
              }
              else if(str[i]==']' && !s.empty())
              {
                  if(s.top()=='[')
                      s.pop();
                  else
                      flag=1;
              }
              else if(str[i]==')' && s.empty())
                  flag=1;
              else if(str[i]==']' && s.empty())
                  flag=1;

          }
          if(flag==0 && s.empty())
              cout<<"Yes"<<endl;
          else
              cout<<"No"<<endl;
      }
     */
}
