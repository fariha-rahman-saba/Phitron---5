#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *left;
    Node *right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree() {
    int val;
    cin >> val;
    Node* root;

    if (val == -1)
        return NULL;

    root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* node = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node* left, *right;

        if(l == -1) left = NULL;
        else left = new Node(l);

        if(r == -1) right = NULL;
        else right = new Node(r);

        node->left = left;
        node->right = right;
       
        if(left) q.push(node->left);
        if(right) q.push(node->right);
    }
    return root;
}

int max_depth(Node* root) {
    if (root == NULL) return 0;
    int ldepth = max_depth(root->left);
    int rdepth = max_depth(root->right);
    return max(ldepth, rdepth) + 1;
}

void print_level(Node* root, int x) {
    if (!root) {
        cout << "Invalid" << endl;
        return;
    }

    int max_level = max_depth(root) - 1;

    if (x < 0 || x > max_level) {
        cout << "Invalid" << endl;
        return;
    }

    queue<pair<Node*, int>> q;
    q.push({root, 0});

    while (!q.empty()) {
        pair<Node*, int> p = q.front();
        q.pop();

        Node* node = p.first;
        int level = p.second;

        if (level == x) {
            cout << node->val << " ";
        }

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }

}

int main() {
    Node* root = input_tree();
    int x;
    cin >> x;
    print_level(root, x);
    return 0;
}
