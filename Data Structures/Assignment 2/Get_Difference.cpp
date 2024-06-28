#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;

        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};

void diff(Node *head)
{
    int mn = INT_MAX;
    int mx = INT_MIN;

    Node *tmp = head;
    while (tmp != NULL)
    {
        if(tmp->val < mn)
        {
            mn = tmp->val;
        }

        if(tmp->val > mx)
        {
            mx = tmp->val;
        }

        tmp = tmp->next;
    }
    int diff = mx-mn;
    cout << diff << endl;
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    diff(head);
    return 0;
    
}
