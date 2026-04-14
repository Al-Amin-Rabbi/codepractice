#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,score;
    cin>>x;
    string nam;
    map<string,int>m;
    map<string, int>::iterator itr;
    while(x--)
    {
        int y;
        cin>>y;
        if(y==1)
        {
            cin>>nam>>score;
            if (m.count(nam)!=0)
            {
                m[nam]+=score;
            }
            else
                m.insert(pair<string, int>(nam,score));
        }

        else if(y==2)
        {
            cin>>nam;
            m.erase(nam);
        }
        else if(y==3)
        {
            cin>>nam;
            cout <<m[nam]<<endl;
        }
    }
    return 0;
}
