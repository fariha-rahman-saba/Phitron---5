#include <bits/stdc++.h>
using namespace std;


int main() {
    stack <int> st;
    int ele;

    while (true)
    {
        cin >> ele;
        if (ele == -1)
        {
            break;
        }
        else
        {
            st.push(ele);
        }
    }

    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }


    return 0;
}