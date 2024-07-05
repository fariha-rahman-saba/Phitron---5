#include <bits/stdc++.h>
using namespace std;

int main()
{
    list <int> ll;
    
    int val;

    while(1)
    {
        cin>>val;
        if (val==-1)
        {
            break;
        }
        else{
            if(find(ll.begin(),ll.end(),val)== ll.end()){
                ll.push_back(val);
            }
        }
        
    }
    ll.sort();
    for (int val:ll)
    {
        cout<<val<<" ";
    }
    



    return 0;
}