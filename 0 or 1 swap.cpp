#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    cin>>N;
    int tc[N];
    for(int i=0; i<N; i++)
    {
        cin>>tc[i];
    }
    int y=0;
    for(int i=0;i<N;i++)
        {
        if((i+1)!=tc[i])
            {
                y++;
            }
        }
        if(y==0)
        {
            cout<<"YES"<<endl;
        }
        else if(y==2){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    return 0;
}
