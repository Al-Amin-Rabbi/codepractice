
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,flag=0;
   stack<char>s;
   char str[100],str1[100];
   cin>>str;
   for(i=0;i<strlen(str);i++)
   {s.push(str[i]);}
 for(i=0;i<strlen(str);i++)
   {
     str1[i]==s.top();
   s.pop();
   }
   for(i=0;i<strlen(str1);i++)
   {
cout<<str1[i];
   }
}
