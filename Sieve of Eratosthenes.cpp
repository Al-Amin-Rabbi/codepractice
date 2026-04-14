#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[100000] = {0};

    for (int i = 2; i <=sqrt(100000); i++)
    {
        for (int j = i * i; j < 100000; j+=i)
        {
            arr[j - 1] = 1;
        }
    }
    for (int i = 1; i < 100000; i++)
    {
        if (arr[i - 1] == 0)
            cout << i << "\t";
    }

}
