
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,c,d,tc=0;
        cin>>a>>b>>c>>d;
        if(a<b)
        {
     //       cout<<"A";
            tc++;
        }
        if(a<c)
        {
     //       cout<<"C";
            tc++;
        }
        if(a<d)
        {
     //      cout<<"D";
            tc++;
        }
        cout<<tc<<endl;
    }
    return 0;

}
