#include <bits/stdc++.h>
using namespace std;

vector <int> strictly_smaller (vector <int> vec)
{
    vector <int> v;
    // if (v[0]<v[1] || v[vec.size()-1])
    // {
    //     /* code */
    // }
    
    for (int i = 1; i < vec.size()-1; i++)
    {
        if (vec[i]< vec[i-1]&& vec[i]<vec[i+1])
        {
            v.push_back(vec[i]);
        }
        
    }
    return v;
    
}

int main() {
    vector <int> vec;
    int n,e;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>e;
        vec.push_back(e);
    }
    vector <int> res = strictly_smaller(vec);
    for(int e:res)
    {
        cout<<e<<endl;
    }
    
    
    return 0;
}