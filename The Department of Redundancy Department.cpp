#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> serial;
    map<int, int> rep;
    int x;

    while (cin>>x)
    {
        if (rep.count(x) == 0)
        {
            rep.insert({x,1});
            serial.push_back(x);
        }
        else
            rep[x] = rep[x] + 1;
    }

    for(int i=0; i<serial.size(); i++)
    {
        cout<<serial[i]<<" "<<rep[serial[i]]<<endl;
    }

    return 0;
}
