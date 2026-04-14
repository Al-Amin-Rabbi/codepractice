#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // cout.tie(0);
    int X, ans = 0;
    cin >> X;
    bitset<32> b(X);
    for (int i = 0; i < 32; i++)
    {
        if (b[i] == 1)
            ans++;
    }
    cout << ans << endl;
}
