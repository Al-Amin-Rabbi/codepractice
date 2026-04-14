#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

// int check(int a)
// {
//     set<int> val;

//     val.insert(a % 10);
//     a = a / 10;
//     val.insert(a % 10);
//     a = a / 10;
//     val.insert(a % 10);
//     a = a / 10;
//     val.insert(a % 10);
//     a = a / 10;
//     return (int)(val.size());
// };
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // cout.tie(0);
    int year, ans, y, x = 4, check;
    set<int> val;
    x = 4;
    cin >> year;
    year++;
    for (int i = year; i < 9500; i++)
    {
        ans = i;
        check = i;
        val.insert(check % 10);
        check = check / 10;
        val.insert(check % 10);
        check = check / 10;
        val.insert(check % 10);
        check = check / 10;
        val.insert(check % 10);
        check = check / 10;
        // cout << val.size();

        if (x == val.size())
        {

            cout << ans << endl;
            break;
        }
    }
}