#include <bits/stdc++.h>
using namespace std;

string visit(const string &s, list<string> &ll, auto &it)
{
    auto new_it = find(ll.begin(), ll.end(), s);
    if (new_it == ll.end())
    {
        return "Not Available";
    }
    else
    {
        it = new_it;
        return *it;
    }
}

string prev_ll(list<string> &ll, auto &it)
{
    if ( it == ll.begin())
    {
        return "Not Available";
    }
    it--;
    return *it;
}

string next_ll(list<string> &ll, auto &it)
{
    auto next_it = it;
    next_it++;
    if (next_it == ll.end())
    {
        return "Not Available";
    }
    it++;
    return *it;
}

int main()
{
    string str, query;
    list<string> ll;
    int t;

    while (cin >> str)
    {
        if (str == "end")
        {
            break;
        }
        ll.push_back(str);
    }
    cin >> t;
    cin.ignore();         
    auto it = ll.begin(); 

    for (int i = 0; i < t; ++i)
    {
        getline(cin, query);
        if (query.find("visit") == 0)
        {
            string address = query.substr(6);
            cout << visit(address, ll,it) << endl;
        }
        else if (query == "prev")
        {
            cout << prev_ll(ll, it) << endl;
        }
        else if (query == "next")
        {
            cout << next_ll(ll, it) << endl;
        }
    }

    return 0;
}
