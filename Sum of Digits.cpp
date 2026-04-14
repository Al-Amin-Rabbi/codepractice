#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

int sum_of_digits(int n)
{
    ll sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // cout.tie(0);
    ll num, ans;
    cin >> num;
    ans = 0;

    while (to_string(num).length() != 1)
    {

        num = sum_of_digits(num);
        ans++;
    }
    cout << ans << endl;
}