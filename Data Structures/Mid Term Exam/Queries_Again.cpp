#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

bool insert_at(Node *&head, Node *&tail, int pos, int val,int size)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    if (pos < 0 || pos > size)
    {
        return false;
    }
    else if (pos == 0)
    {
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    else if (pos == size)
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    else
    {
        for (int i = 0; i <= pos - 1; i++)
        {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next->prev = newNode;
        tmp->next = newNode;
        newNode->prev = tmp;
    }
    return true;
}

void print_from_left(Node *head)
{
    cout << "L -> ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_from_right(Node *tail)
{
    cout << "R -> ";
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{

    int t, x, v;
    cin >> t;
    int size=0;

    Node *head = NULL;
    Node *tail = NULL;

    while (t--)
    {
        cin >> x >> v;
        int res = insert_at(head, tail, x, v,size);
        if (res==1)
        {
            size++;
            print_from_left(head);
            print_from_right(tail);
        }

        else
        {
            cout << "Invalid\n";
        }
    }

    return 0;
}