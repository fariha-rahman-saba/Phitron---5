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

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else{
        Node* tmp = tail;
        tail->next = newNode;
        tail = newNode;
        tail->prev = tmp;
        

    }
}

void print_ll(Node* head)
{
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

bool is_palindrome(Node* head, Node*tail)
{
    Node *tmp1 = head;
    Node *tmp2 = tail;
    while (tmp1!=NULL && tmp2!= NULL)
    {
        if (tmp1->val!=tmp2->val)
        {
            return false;
        }
        else{
            tmp1=tmp1->next;
            tmp2=tmp2->prev;
        }
    }
    return true;
    
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
            insert_tail(head, tail, val);
        }
    }
    // print_ll(head);
    bool result = is_palindrome(head,tail);
    if(result)
    {
        cout<<"YES";
    }
    else 
    {
        cout<<"NO";
    }

    return 0;
}