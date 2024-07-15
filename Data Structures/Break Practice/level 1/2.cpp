#include <bits/stdc++.h>
using namespace std;

vector <int> right_sum(vector <int> vec)
{
    vector <int> v;
    
    for (int i = 1; i < vec.size(); i++)
    {
        int sum=0;
        for (int j = i; j < vec.size(); j++)
        {
            sum+=vec[j];
        }
        v.push_back(sum);
    }
    v.push_back(0);
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

    vector <int> res = right_sum(vec);

    for(int e:res)
    {
        cout<<e<<" ";
    }

    return 0;
}