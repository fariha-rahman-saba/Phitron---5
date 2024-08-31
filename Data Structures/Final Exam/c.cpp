#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  
    cin >> t;
    cin.ignore();  

    while (t--) {
        string line;
        getline(cin, line);  
        map<string, int> wordfreq;
        stringstream stream(line);
        string word;
        string maxWord;
        int maxCount = 0;

        while (stream >> word) {

            wordfreq[word]++;
            
            if (wordfreq[word] > maxCount) {
                maxCount = wordfreq[word];
                maxWord = word;
            }
        }

        cout << maxWord << " " << maxCount << endl;
    }

    return 0;
}
