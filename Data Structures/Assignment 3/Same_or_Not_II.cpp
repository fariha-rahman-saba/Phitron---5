#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }

        delete deleteNode;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }

    int front()
    {
        return head->val;
    }
    void pop()
    {
        if (head == NULL)
            return;
        sz--;
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        else
        {
            head->prev = NULL;
        }
        delete deleteNode;
    }
    int size() {
        return sz;
    }
    
    bool empty() {
        return sz == 0;
    }
};
bool same_or_not(myStack st, myQueue que)
{
    int a, b;

    if (st.size() != que.size())
    {
        return false;
    }

    else
    {
        while (!st.empty() && !que.empty())
        {
            a = st.top();
            b = que.front();
            st.pop();
            que.pop();
            if (a != b)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    myStack st;
    myQueue que;

    int n, m, e;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        st.push(e);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> e;
        que.push(e);
    }

    bool res = same_or_not(st, que);
    if (res)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO";

    return 0;
}