#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
	while(x--){
      int l;
     double pi=acos(-1);
     double w,r,green,red;
        cin>>l;
        w=(0.6)*l;
        r=(0.2)*l;
        red=(pi)*r*r;
        green=(l*w)-red;
        printf("%.2lf %.2lf\n",red,green);

}
	return 0;
}
