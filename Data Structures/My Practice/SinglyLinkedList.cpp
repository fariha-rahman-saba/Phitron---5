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

void list_inp_head(int val, Node *&head)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
    }

    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void list_inp_tail(int val, Node *&head)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
    }

    else
    {
        Node *tmp = head;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = newNode;
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
    tmp->next=newNode;
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

int recursive_print_ll(Node* node)
{
    if (node->next==NULL)
    {
        cout<<node->val;
        return 0;
    }
    else 
    {
        cout<<node->val<<" ";
        recursive_print_ll(node->next);
    }
    
}

int recursive_print_ll_reverse(Node* node)
{
    if (node->next=NULL)
    {
        return node->val;

    }
    else 
    {
        return recursive_print_ll(node->next);

    }
    
}



int search_ll(Node* head, int v)
{
    int i=0;
    bool flag=0;
    Node* tmp = head;
    while (tmp!=NULL)
    {
        if (tmp->val==v)
        {
            flag=1;
            break;
        }
        else 
        {
            i++;
            tmp=tmp->next;
        }
    }
    if (flag)
    {
        return i;
    }
    else return -1;
    
    
}

// Doesn't work
void sort_ll(Node * &head)
{
    Node* tmp=head;
    Node* newTemp=head;
    
    while (tmp!=NULL)
    {
        while (newTemp!=tmp)
        {
            if (newTemp->val>tmp->val)
            {
                swap(newTemp->val,tmp->val);
            }
            newTemp=newTemp->next;
        }
        tmp=tmp->next;
        
    }
    
}

int main()
{
    int ele;
    Node *head = NULL;

    while (true)
    {
        cin >> ele;
        if (ele == -1)
        {
            break;
        }
        else
        {
            list_inp_tail(ele, head);
            // list_inp_head(ele, head);
        }
    }
    print_ll(head);
    cout<<endl;
    // insert_at_pos(head,-3,3);
    // int idx = search_ll(head,3);
    // cout<<"index: "<<idx;
    // sort_ll(head);
    // print_ll(head);
    // recursive_print_ll(head);
    // cout<<endl;
    recursive_print_ll_reverse(head);

    return 0;
}