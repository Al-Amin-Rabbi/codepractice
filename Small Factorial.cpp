#include <bits/stdc++.h>
using namespace std;

int fact(int n);

int fact(int n)
{
	int res = 1;
	for (int i = 2; i <= n; i++)
		res = res * i;
	return res;
}

int main()
{   int x;
    cin>>x;
    while(x--){
	int n;
	cin>>n;
	cout<<fact(n)<<endl;

}
	return 0;
}
