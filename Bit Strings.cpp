#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;
long long binpow(long long a, long long b)
{
    long long res = 1, mod = 1000000007;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod; // If b is odd, multiply result by a
        a = (a * a) % mod;         // Square the base
        b >>= 1;                   // Right shift b by 1 (divide by 2)
    }
    return res;
}
int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // cout.tie(0);
    ll num = 1, ans = 1;
    cin >> num;
    ans = binpow(2, num);
    cout << ans;

    return 0;
}