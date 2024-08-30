#include <bits/stdc++.h>
using namespace std;

class cmp
{
public:
    bool operator()(pair<string, int> &a, pair<string, int> &b)
    {   if(a.first!=b.first) return a.first < b.first;
        else return a.second>b.second;
            
    }
};

int main()
{
    int t;
    cin >> t;
    string s;
    int n, e;
    vector<pair<string, int>> vec;
    while (t--)
    {
            cin >> s;
            cin >> e;
            vec.push_back({s, e});

    }
    sort(vec.begin(),vec.end(),cmp());
     for (auto it : vec)
                cout << it.first << " " << it.second<<endl;
                


    return 0;
}