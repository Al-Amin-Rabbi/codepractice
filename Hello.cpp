#include<bits/stdc++.h>
using namespace std;
int main(){

int x,y,z;
scanf("%d %d %d",&x,&y,&z);
if(x==0 || y==0 || z==0){
   printf("No");
}
else if(x==y && y==z && z==x){
   printf("Yes");
}
else
printf("No");


}