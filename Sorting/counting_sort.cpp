#include <bits/stdc++.h>
using namespace std;


int main() {
    string str;
    cin>>str;

    int frq[26]={0};
    for (char c: str)
    {
        frq[c-'a']++;
    }
    
    // for (char i = 'a'; i <= 'z'; i++)
    // {
    //     cout<<i<<" - "<<frq[i-'a']<<endl;
    // }

    for (char i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < frq[i-'a']; j++)
        {
            cout<<i;
        }
        
    }
    
    

    return 0;
}