#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // cout.tie(0);

    ll n;
    cin >> n;
    cout << n << " ";
    if (n == 1)
    {
        return 0;
    }
    while (1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            cout << n << " ";
        }
        else
        {
            n = (3 * n) + 1;
            cout << n << " ";
        }
        if (n == 1)
            break;
    }

    return 0;
}
