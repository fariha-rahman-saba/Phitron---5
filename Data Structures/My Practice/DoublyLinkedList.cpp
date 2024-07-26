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

void list_inp_head(int val, Node *&head,Node* &tail)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail=newNode;
    }

    else
    {
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
}

void list_inp_tail(int val,Node *&head, Node *&tail)
{
    Node *newNode = new Node(val);

    if (tail == NULL)
    {
        head=newNode;
        tail = newNode;
    }

    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void insert_at_pos(Node* head,int val, int pos)
{
    Node* tmp = head;
    Node *newNode = new Node(val);
    for (int i = 0; i < pos-1; i++)
    {
        tmp=tmp->next; 
    }
    newNode->next=tmp->next;
    tmp->next->prev = newNode;
    tmp->next=newNode;
    newNode->prev = tmp;
}

void print_ll(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_ll_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

// Doesn't work
Node *recursive_print_ll(Node *&node)
{
    if (node == NULL)
    {
        return NULL;
    }
    else
    {
        cout << node->val << " ";
        recursive_print_ll(node->next);
    }
}

int search_ll(Node *head, int v)
{
    int i = 0;
    bool flag = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == v)
        {
            flag = 1;
            break;
        }
        else
        {
            i++;
            tmp = tmp->next;
        }
    }
    if (flag)
    {
        return i;
    }
    else
        return -1;
}

// Doesn't work
void sort_ll(Node *&head)
{
    Node *tmp = head;
    Node *newTemp = head;

    while (tmp != NULL)
    {
        while (newTemp != tmp)
        {
            if (newTemp->val > tmp->val)
            {
                swap(newTemp->val, tmp->val);
            }
            newTemp = newTemp->next;
        }
        tmp = tmp->next;
    }
}

int main()
{
    int ele;
    Node *head = NULL;
    Node *tail = head;

    while (true)
    {
        cin >> ele;
        if (ele == -1)
        {
            break;
        }
        else
        {
            list_inp_tail(ele, head,tail);
            // list_inp_head(ele, head,tail);
        }
    }
    print_ll(head);
    insert_at_pos(head,55,2);
    cout<<endl;
    print_ll(head);
    print_ll_reverse(tail);
    // cout<<endl;
    // // int idx = search_ll(head,3);
    // // cout<<"index: "<<idx;
    // sort_ll(head);
    // print_ll(head);

    return 0;
}