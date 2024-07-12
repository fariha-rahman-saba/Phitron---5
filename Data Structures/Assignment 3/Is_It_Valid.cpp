#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> st;
        for(char ch: s)
        {
            if(!st.empty() && ((ch=='0' && st.top()=='1') || (ch=='1' && st.top()=='0')))
            {
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        
    return st.empty();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (isValid(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
