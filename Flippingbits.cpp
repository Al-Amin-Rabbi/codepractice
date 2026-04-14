#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // cout.tie(0);
    int howmany;
    cin >> howmany;
    while (howmany--)
    {
        long int n;
        cin >> n;
        bitset<32> binary(n);
        bitset<32> flipped = ~binary;
        cout << flipped.to_ulong() << endl;
    }

    return 0;
}
