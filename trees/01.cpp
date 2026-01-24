#include <bits/stdc++.h>
#include <vector>
using namespace std;

//Node structure for tree
class Node{
public:
    int data;
    vector <Node*> children;
    Node (int x){
        data = x;
    }
};

// to add child to a node
void addChild(Node* parent, Node* child){
    parent->children.push_back(child);
}

// to print parents of each node
void printParents(Node* node, Node* parent){
    if(parent == nullptr){
        cout << node->data << endl;
    }
    else
        cout << node->data << endl;

    for(auto child : node->children)
        printParents(child,node);
}