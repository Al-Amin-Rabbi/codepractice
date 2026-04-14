#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x;
    char nam[2*x][100];
    for(int i=0; i<(2*x); i++)
    {
        scanf(" %[^\n]c",nam[i]);
    }

    cin>>y;
    char gan[y][100];
    for(int i=0; i<y; i++)
    {
        scanf(" %[^\n]c",gan[i]);
    }
    for(int i=0; i<y; i++)
    {
        for (int j=0; j<2*x; j++)
        {
            if(strcmp(gan[i],nam[j])==0)
            {
                puts(nam[j+1]);
            }

        }

    }
    return 0;



}
