#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //  cout.tie(0);
    std::cout << std::fixed;
    //  std::cout << std::setprecision(4);
    int n;
    cin >> n;
    while (n--)
    {
        char x[3][3], a = 0, b = 0, c = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> x[i][j];
                if (x[i][j] == 'A')
                    a++;
                else if (x[i][j] == 'B')
                    b++;
                else if (x[i][j] == 'C')
                    c++;
            }
        }

        if (a == 2)
            cout << "A" << endl;
        else if (b == 2)
            cout << "B" << endl;
        else
            cout << "C" << endl;
    }

    return 0;
}
