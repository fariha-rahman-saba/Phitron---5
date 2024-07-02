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

int main()
{
    int v;

    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        cin >> v;
        if (v == -1)
        {
            break;
        }

        else
        {
            Node *newNode = new Node(v);
            if (head == NULL)
            {
                head = newNode;
                tail = newNode;
            }
            else
            {
                tail->next = newNode;
                tail=newNode;
            }
        }
    }

    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val<<" ";
        tmp = tmp->next;
    }

    return 0;
}