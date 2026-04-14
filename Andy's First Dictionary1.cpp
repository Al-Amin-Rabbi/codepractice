#include <bits/stdc++.h>
using namespace std;

int main()
{   char str1[5000];
    printf("Input the string :");
    gets(str1);
    printf("The given sentence is: %s",str1);
    for(int i=0;i<100;i++)
    { if(str1[i]>='A' && str1[i]<='Z')
        str1[i]=str1[i]+32;
    }
    printf("\nAfter Case changed the string is: %s",str1);


return 0;
}
