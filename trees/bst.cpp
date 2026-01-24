#include <bits/stdc++.h>
#include <vector>
using namespace std;



struct Node{
    int val;
    Node *left = nullptr, *right = nullptr;
    Node(int x) : val (x);

};



void create(int x){
    if(!root ){
        root = new Node(val);
    }
}

 











Node* create(int v) {
    return new Node(v);
}

Node* add(Node* root, int v) {
    if (!root) return create(v);
    if (v < root->val) root->left = add(root->left, v);
    else if (v > root->val) root->right = add(root->right, v);
    return root; // ignore duplicates
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    std::cout << root->val << ' ';
    inorder(root->right);
}

int main() {
    Node* root = nullptr;
    root = add(root, 50);
    add(root, 30); add(root, 70);
    add(root, 20); add(root, 40);
    inorder(root);
    std::cout << '\n';
    return 0;
}
// ...existing code...