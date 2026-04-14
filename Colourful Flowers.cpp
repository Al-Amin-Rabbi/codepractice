    #include <bits/stdc++.h>
    using namespace std;
    int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    std::cout << std::fixed;
    std::cout << std::setprecision(4);
    double a,b,c;
    double sun,vio,ros,s,r,x,triangle;
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    triangle=(sqrt(s*(s-a)*(s-b)*(s-c)));
    r=triangle/s;
    ros=M_PI*r*r;
    vio=triangle-ros;
    x=(a*b*c)/(4*(sqrt(s*(s-a)*(s-b)*(s-c))));
    sun=(M_PI*x*x)-ros-vio;
    cout<<sun<<" "<<vio<<" "<<ros<<endl;

    return 0;}