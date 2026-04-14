#include<bits/stdc++.h>
using namespace std;
int main() {

int de,i=1,remi,oc_number=0;
cin>>de;
while(de!=0){
remi=de%8;
oc_number = oc_number +remi*i;
de=de/8;
i=i*10;
}
cout<<oc_number<<endl;
return 0;}
