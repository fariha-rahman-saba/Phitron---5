#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val) {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

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

void print_ll(Node* head) {
    Node* tmp = head;
    while(tmp!=NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

bool match(Node* head1, Node* head2)
{
    Node* tmp1 = head1;
    Node* tmp2 = head2;
    while(tmp1!=NULL && tmp2!=NULL) {

        if(tmp1->val!=tmp2->val)
        {
            return false;
        }
        
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    if (tmp1==NULL && tmp2==NULL)
    {
        return true;
    }
    else return false;
    
}

int main() {

    int ele;
    Node *head1 = NULL;
    Node *tail1 = head1;


    Node *head2 = NULL;
    Node *tail2 = head2;

    while (true)
    {
        cin >> ele;
        if (ele == -1)
        {
            break;
        }
        else
        {
            list_inp_tail(ele, head1,tail1);
        }
    }

    while (true)
    {
        cin >> ele;
        if (ele == -1)
        {
            break;
        }
        else
        {
            list_inp_tail(ele, head2,tail2);
        }
    }

    bool match_res = match(head1,head2);

    if(match_res) cout<<"YES";
    else cout<<"NO";

    

    return 0;
}