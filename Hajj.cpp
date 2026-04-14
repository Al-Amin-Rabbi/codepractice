#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    int y=1;
    while(x!="*")
    {
        cin>>x;
        if((x.compare("Hajj"))==0)
            cout<<"Case "<<y<<": "<<"Hajj-e-Akbar"<<endl;
        else if((x.compare("Umrah"))==0)
            cout<<"Case "<<y<<": "<<"Hajj-e-Asghar"<<endl;
        y++;
    }
    return 0;
}
