#include <bits/stdc++.h>
using namespace std;
int main()
{

    map<int, int> rep;
    map<int, int>::iterator itr;
    int x;

    while (cin>>x && x!=0)
    {
        if (rep.count(x) == 0)
        {
            rep[x] = 1;
        }
        else
            rep[x] = rep[x] + 1;
    }

     for (itr = rep.begin(); itr != rep.end(); ++itr) {
        cout <<itr->first <<" "<< itr->second<<endl;
    }
    return 0;
}
