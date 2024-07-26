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


void insert_at_tail(Node* newNode, Node* &head, Node *&tail)
{
    if (tail==NULL && head==NULL)
    {
        head = newNode;
        tail=newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    
}

void print(Node* head)
{
    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int n;

    while (true)
    {
        cin >> n;
        if (n == -1)
        {
            break;
        }
        else
        {
            Node *newNode = new Node(n);
            insert_at_tail(newNode, head,tail);
        }
    }
    print(head);

    return 0;
}