#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (tail == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void remove_duplicates(Node* head) {
    if (head == NULL) return;

    Node* current = head;
    while (current != NULL) {
        Node* pointer = current;
        while (pointer->next != NULL) {
            if (pointer->next->val == current->val) {
                Node* tmp = pointer->next;
                pointer->next = pointer->next->next;
                delete tmp;
            } else {
                pointer = pointer->next;
            }
        }
        current = current->next;
    }
}

void print_list(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;

    while (true) {
        cin >> val;
        if (val == -1) break;
        insert_tail(head, tail, val);
    }

    remove_duplicates(head);

    print_list(head);

    while (head != NULL) {
        Node* tmp = head;
        head = head->next;
        delete tmp;
    }

    return 0;
}
