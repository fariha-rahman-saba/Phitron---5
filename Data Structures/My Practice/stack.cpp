#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    vector <int> vec;

    void pop()
    {
        vec.pop_back();
    }
    void push(int val)
    {
        vec.push_back(val);
    }
    int top()
    {
        int t = vec[vec.size()-1];
        return t;
    }
    bool empty()
    {
        if(vec.size()==0) return true;
        else return false;
    }
};

int main()
{
    Stack st;
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