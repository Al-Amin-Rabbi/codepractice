#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // cout.tie(0);
    int n, ans = 0, x;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    x = pow(2, n);
    for (int i = 0; i < x; i++)
    {
        ans = 0;
        for (int j = 0, k = 1; j < n; j++, k *= 2)
        {
            ans += i & k ? arr[j] : (-arr[j]);
        }
        if ((ans % 360) == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    if (ans != 0 || ans != 360 || ans != -360)
    {
        cout << "NO" << endl;
    }

    return 0;
}