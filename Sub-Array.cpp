#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  // cout.tie(0);
  std::cout << std::fixed;
  std::cout << std::setprecision(4);
  int T,ok=1;
  cin >> T;
  while (T--)
  {
    int N, x = 1;
    cin >> N;
    int A[N];
    int ans = ((N) * (N + 1)) / 2;
    for (int i = 0; i < N; i++)
    {
      cin >> A[i];
    }

    for (int i = 0; i < N; ++i)
    {
      if (i == 0)
        continue;
      else
      {
        if (A[i] == A[i - 1])
          ++x;
        else
        {
          ans -= (((x) * (x + 1)) / 2);
          x = 1;
        }
      }
    }
    cout <<"Case "<<ok<<": "<< ans - (((x) * (x + 1)) / 2)<< endl;
    ++ok;
  }

  return 0;
}