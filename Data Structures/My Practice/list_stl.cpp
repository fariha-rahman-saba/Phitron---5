#include <bits/stdc++.h>
using namespace std;

int main() {
    list <int> ls;

    vector <int> vec;

    stack <int> stk;
    queue <int> q;

    array <int,5> arr;

    vec = {1,5,3,4,7};
    
    ls.assign(vec.begin(),vec.end()) ;

    for(int val:ls)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<"head ll:"<<*ls.begin();
    cout<<"head ll:"<<*vec.begin();

    return 0;
}