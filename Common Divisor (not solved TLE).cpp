#include <bits/stdc++.h>
using namespace std;
int gcd(int A,int B);

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        int A, B;
        cin >> A >> B;
        int x = gcd(A,B);
        int ct = 0;
        
        for (int i = 1; i*i <=x ; i++)
        {
            if (x % i == 0 && i * i == x)
            {
                    ct++;
            }
            else if (x % i == 0 && i * i != x)
            {
                ct=ct+2;
            }  
        }
        cout<<ct<<endl;

    }
}
int gcd( int A,int B){
if(B==0)
  return A;
  else
  return gcd(B,(A%B));
}