#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore(); 

    while (t--)
    {
        string input;
        getline(cin, input); 
        map<string, int> mp;
        stringstream ss(input);
        string word;

        while (ss >> word)
        {
            mp[word]++;
        }

        string max_word;
        int max_count = 0;

        for (const auto& it : mp)
        {
            if (it.second > max_count) {
                max_word = it.first;
                max_count = it.second;
            }
        }

        cout << max_word << " " << max_count << endl;

        mp.clear();
    }

    return 0;
}
