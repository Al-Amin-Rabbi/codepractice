#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> x;
    stack<int> a;
    for(int i=1;i<3000;i++)
    {
        if(i<10){
            x.push_back(i);
        }
        else
        {   int b=i,y;
            while(b>0){
                y=b%10;
                b=b/10;
                a.push(y);
            }
            while(!a.empty()){
                x.push_back(a.top());
                a.pop();
            }
        }
    }
    int k;
    cin>>k;
    cout<<x[k-1]<<endl;
    
    
}
