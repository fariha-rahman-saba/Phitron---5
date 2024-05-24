#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    while (getline(cin, s))
    {
        sort(s.begin(),s.end());
        
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i]==' ')
            {
                continue;
            }
            else cout<<s[i];
            
        }
        cout<<endl;
        
    }
    
}