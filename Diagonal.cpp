#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r =2,c=1;;
   long long int z;
    while(z!=0)
    {   long long int n;
        long double y;
        cin>>z;
        if(z==0)
        {
            break;
        }
        y=ceil((3+sqrt(9+4*2*z))/(2));
        n=(int)y;
        cout<<"Case "<<c<<": "<<n<<endl;
         c++;
    }
    return 0;
}
