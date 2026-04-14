
#include<bits/stdc++.h>
using namespace std;
int main()
{ int i,flag=0;
   stack<char>s;
   char str[100];
   cin>>str;
   for(i=0;i<strlen(str);i++)
   {s.push(str[i]);}
 for(i=0;i<strlen(str);i++)
   {
     if(str[i]!=s.top())
   {
       cout<<"Not Plaindrome"<<endl;
       return 0;
   }
   s.pop();
   }

   cout<<"Palindrome"<<endl;
}
