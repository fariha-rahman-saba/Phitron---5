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

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void insert_at_tail(Node* &head,Node* &tail, int val)
{
    Node *newNode = new Node(val);

    if (head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    
    tail->next = newNode;
    tail = newNode;
}

int main()
{
    int val;
    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {   
            insert_at_tail(head, tail, val);
        }
    }
    print_list(head);

    return 0;
}