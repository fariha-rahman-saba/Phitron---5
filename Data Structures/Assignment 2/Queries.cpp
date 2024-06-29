#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
    }

    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void delete_index(int index, Node *&head, Node *&tail)
{
    if (head == NULL)
        return;

    if (index == 0)
    {
        Node *temp = head;
        head = head->next;
        if (head == NULL)
            tail = NULL;
        delete temp;
        return;
    }

    Node *current = head;
    for (int i = 0; current != NULL && i < index - 1; i++)
    {
        current = current->next;
    }

    if (current == NULL || current->next == NULL)
        return;

    Node *next = current->next->next;
    delete current->next;
    current->next = next;

    if (current->next == NULL)
        tail = current;
}

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int t;
    cin >> t;
    while (t--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_head(head,tail,v);
        }
        else if (x == 1)
        {
            insert_tail(head,tail,v);
        }
        else if (x == 2)
        {
            delete_index(v,head,tail);
        }
        print_list(head);
    }
    return 0;
}
