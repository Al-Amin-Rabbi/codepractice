#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int len;
  string s;
  
  while (getline(cin, s))
  {
    int max = 0,a[26] = {0}, A[26] = {0};
    len = s.size();

    for (int i = 0; i < len; i++)
    {

      if (s[i] == ' ')
        continue;
      else if (s[i] >= 'a' && s[i] <= 'z')
        ++a[s[i] - 'a'];
      else if (s[i] >= 'A' && s[i] <= 'Z')
        ++A[s[i] - 'A'];
    }

    for (int i = 0; i < 26; ++i)
    {
      if (a[i] > max)
        max = a[i];
      if (A[i] > max)
        max = A[i];
    }
   
    
    for (int i = 0; i < 26; i++)
    {
    	if(max==A[i])
      cout<<(char)('A'+i);
    }
     for (int i = 0; i < 26; i++)
     {
     
      if(max==a[i])    
      cout<<(char)('a'+i);
    }
     cout<<" "<<max<<"\n";
  }
  return 0;
}