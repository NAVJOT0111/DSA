// Use typedef + malloc if you’re writing in C.
// Use constructors + new if you’re writing in C++.

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};

int main(){
    Node* node1 =  new Node(10, nullptr);
    cout << node1 -> data;
    return 0;
}
