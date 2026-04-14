#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    deque<char> d = {'h', 'e', 'i', 'd', 'i'};

    cin >> s;
    if (s.length() <= 5)
    {
        cout << "NO" << endl;
    }
    else
    {
        for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] == d.front())
                d.pop_front();
        }
        if (d.empty())
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}
