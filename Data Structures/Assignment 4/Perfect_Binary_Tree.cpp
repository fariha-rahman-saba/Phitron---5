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

pair<Node*,int> input_tree()
{
    int nodes=0;
    int val;
    cin>>val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        {
            root = new Node(val);
            nodes++;
        }

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
            {
                left = new Node(l);
                nodes++;
            }

        if (r == -1)
            right = NULL;
        else 
        {
            right = new Node(r);
            nodes++;
        }
        node->left = left;
        node->right=right;
        if(node->left) q.push(node->left);
        if(node->right) q.push(node->right);
    }

    return {root,nodes};
}

int max_depth(Node* root)
{
    if(root==NULL) return 0;
    int max_d = 0;
    int ldepth = max_depth(root->left);
    int rdepth = max_depth(root->right);
    return (max(ldepth,rdepth)+1);

}

bool is_complete(Node* root,int nodes)
{
    int max_d = max_depth(root);
    int total_nodes = pow(2,max_d)-1;
    return (nodes==total_nodes);
}

int main() {
    pair<Node*,int> p;
    p = input_tree();
    Node* root = p.first;
    int nodes = p.second;

    if(is_complete(root,nodes)) cout<<"YES";
    else cout<<"NO";
    

    return 0;
}