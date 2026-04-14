#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=99,index=1;

while(x!=0)
{
int y=0,z=0;
cin>>x;
if(x==0)
{
    break;
}
int arr[x];
for(int i=0; i<x; i++)
{
    cin>>arr[i];
}
        for(int i=0; i<x; i++)
        {
            if(arr[i]==0)
            {
                y++;
            }
            else
                z++;

        }
cout<<"Case "<<index<<": "<<z-y<<endl;
index++;

}
    return 0;
}
