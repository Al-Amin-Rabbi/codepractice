#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //  cout.tie(0);
  std::cout << std::fixed;
  //  std::cout << std::setprecision(4);
  int n;
  cin >> n;
  while (n--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b)
    {
      a = -10;
      b = -10;
    }
    else if (a == c)
    {
      a = -10;
      c = -10;
    }
    else if (b == c)
    {
      b = -10;
      c = -10;
    }
    if(a!=-10)
    cout<<a<<endl;
    if(b!=-10)
    cout<<b<<endl;
    if(c!=-10)
    cout<<c<<endl;
  }

  return 0;
}
