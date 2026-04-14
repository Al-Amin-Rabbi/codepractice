#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  // cout.tie(0);
  int w, h, n;
  int x1, x2, y1, y2;
  
  while (cin >> w >> h >> n)
  {
    if (w == 0 && h == 0 && n == 0)
      break;
    int main[w][h];

    for (int i = 0; i < w; ++i)
    {
      for (int j = 0; j < h; ++j)
      {
        main[i][j] = 1;
      }
    }
    while(n--)
    {
      cin >> x1 >> y1 >> x2 >> y2;
      --x1;
      --y1;
      --x2;
      --y2;
      if (x1 > x2)
        swap(x1, x2);
      if (y1 > y2)
        swap(y1, y2);
      for (int i = x1; i <= x2; ++i)
      {
        for (int j = y1; j <= y2; ++j)
        {
          main[i][j] = 0;
        }
      }
    }
  int ans=0;
    for (int i = 0; i < w; ++i)
    {
      for (int j = 0; j < h; ++j)
      {
        if (main[i][j] == 1)
          ans++;
      }
    }
    if (ans == 0)
      cout << "There is no empty spots." << endl;
    if (ans == 1)
      cout << "There is one empty spot." << endl;
    if (ans > 1)
      cout << "There are " << ans << " empty spots." << endl;
  }
  return 0;
}