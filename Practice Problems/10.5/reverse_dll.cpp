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

void list_inp_tail(int val, Node *&head, Node *&tail)
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
        newNode->prev = tail;
        tail = newNode;
    }
}

void print_ll(Node *rev_head)
{
    // cout<<"Rev_head val: "<<rev_head->val;
    Node *tmp = rev_head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void reverse(Node *head, Node *tail, Node *&rev_head, Node *&rev_tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        Node *newNode = new Node(tmp->val);
        if (rev_head == NULL)
        {
            rev_head = newNode;
            rev_tail=newNode;
        }
        else
        {
            rev_tail->next = newNode;
            newNode->prev = rev_tail;
            rev_tail=newNode;
        }
        tmp=tmp->prev;
    }
}

int main()
{

    int ele;
    Node *head = NULL;
    Node *tail = NULL;

    Node *rev_head = NULL;
    Node *rev_tail = NULL;

    while (true)
    {
        cin >> ele;
        if (ele == -1)
        {
            break;
        }
        else
        {
            list_inp_tail(ele, head, tail);
        }
    }
    reverse(head,tail,rev_head,rev_tail);
    // cout<<"Linled List: ";
    print_ll(rev_head);

    return 0;
}