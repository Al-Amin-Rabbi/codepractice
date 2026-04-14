#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,score;
    cin>>x;
    set<int>s;
    set<int>::iterator it;
    while(x--)
    {
        int y;
        cin>>y;
        if(y==1)
        {
            cin>>score;
            s.insert(score);
        }

        else if(y==2)
        {
            cin>>score;
            s.erase(score);
        }
        else if(y==3)
        {
            cin>>score;
            if (s.find(score)==s.end())
             {
             cout<<"No"<<endl;}
            else
                {cout<<"Yes"<<endl;}
        }
    }
    return 0;
}
