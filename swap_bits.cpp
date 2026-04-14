#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;
void swapbits()
{
    int N;
    cin >> N;
    bitset<32> bits(N);
    for (int i = 0; i < 32; i += 2)
    {
        if (bits[i] != bits[i + 1])
        {
            bool temp = bits[i];
            bits[i] = bits[i + 1];
            bits[i + 1] = temp;
        }
    }
    cout << bits.to_ulong() << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        swapbits();
    }
    return 0;
}
