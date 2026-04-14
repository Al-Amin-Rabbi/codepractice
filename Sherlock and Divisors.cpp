#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        long long int a;
        cin >> a;
        int b = sqrt(a);
        int tc = 0;
        for (size_t i = 1; i <= b; i++)
        {
            if (a % i == 0)
            {
                if (i * i == a)
                {
                    if ((i % 2) == 0)
                    {
                        tc++;
                    }
                }
                else
                {
                    if ((i % 2) == 0)
                    {
                        tc++;
                    }
                    if (((a / i) % 2) == 0)
                    {
                        tc++;
                    }
                }
            }
        }
        cout<<tc<<endl;
    }
}
