#include<bits/stdc++.h>
using namespace std;
int fact(long long int n);

int main(){
    int n;
 long long int x;
 cin>>n;
  x=fact(n);
  cout<<x<<endl;
return 0;
}
int fact(long long int n)
{
	long long int res = 1;
	for (int i = 2; i <=n; i++)
		res = res * i;
	return res;
}
