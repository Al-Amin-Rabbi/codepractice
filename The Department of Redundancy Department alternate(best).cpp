#include <bits/stdc++.h>
using namespace std;
int main()
{

    hash_map<int, int> rep;
    hashmap<int, int>::iterator itr;
    int x;

    while (cin>>x)
    {
        if (rep.count(x) == 0)
        {
           rep.insert({x,1});
        }
        else
            rep[x]++;
    }

     for (itr = rep.begin(); itr != rep.end(); ++itr) {
        cout <<itr->first <<" "<< itr->second<<endl;
    }
    return 0;
}
