#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    // Node(int val) {
    //     this->val = val;
    //     this->next = NULL;
    // }
};

int main()
{

    // Node* a = new Node(50);
    // Node* b = new Node(40);
    // Node* c = new Node(30);
    // Node* d = new Node(20);

    Node x;
    x.val = 50;
    x.next = NULL;

    Node y;
    y.val = 40;
    y.next = NULL;

    x.next = &y;

    // cout<<x.val<<" "<<*(x.next).val;
    

    return 0;
}