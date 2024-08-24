#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *inp_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue <Node*> q;
    if(root) q.push(root);

    while (!q.empty())
    {
        Node* node = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *left, *right;
        if (l == -1)
            left = NULL;
        else
            left = new Node(l);

        if (r == -1)
            right = NULL;
        else right = new Node(r);
        node->left = left;
        node->right=right;
        if(node->left) q.push(node->left);
        if(node->right) q.push(node->right);
    }

    return root;
}

vector<int> output(Node* root)
{
    vector<int> vec;
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* node = q.front();
        q.pop();

        if(node->left==NULL && node->right==NULL) vec.push_back(node->val);

        if(node->left) q.push(node->left);
        if(node->right) q.push(node->right);
    }
    return vec;

}

int main()
{
    Node* root = inp_tree();
    vector<int> result;
    result = output(root);
    sort(result.begin(),result.end(), greater<int>());
    for(int i:result) cout<<i<<" ";

    return 0;
}