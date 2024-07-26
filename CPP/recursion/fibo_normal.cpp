#include <bits/stdc++.h>
using namespace std;


int main() {
    int n1=0;
    int n2=1;
    int n=8;
    cout<<n1<<" "<<n2<<" ";
    for (int i = 0; i < 6; i++)
    {
        int n3 = n2+n1;
        n1=n2;
        n2=n3;
        cout<<n2<<" ";
    }
    

    return 0;
}