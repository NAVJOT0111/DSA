#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

class Stack{
private:
    Node* top;

public:
    Stack(){
        top = nullptr;
    }

     bool isEmpty() {
        return top == nullptr;
    }

    void push(int value){
        Node* newnode = new Node(value);
        newnode ->next = top;   // Link new node to previous top
        top = newnode;   // Move top to new node
        cout << value << " pushed to stack\n";
    }

    void pop(){
        if (isEmpty()) {
            cout << "Stack Underflow (empty stack)\n";
        }
        Node* temp = top;
        top= top->next;
        cout << temp -> data << "popped " << endl;
        delete temp;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return top->data;
    }

    void display(){
         if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        Node* temp = top;
        while(temp != nullptr){
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl;
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    s.display();
    return 0;
}