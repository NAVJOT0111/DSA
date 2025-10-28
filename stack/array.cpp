#include <iostream>
using namespace std;

#define MAX 5

class Stack{
    int top;
    int arr[MAX];

public:
    Stack() {
        top = -1;
    }

    bool isEmpty(){
        return top == -1;
    }

    bool isFull(){
        return top == MAX -1;
    }

    void push(int value){
        if(isFull()){
            cout << "Stack overflow" << endl;
        }
        else{
            arr[++top] = value;
            cout << value << "pushed to stack" << endl;
        }
        
    }

    void pop(){
        if(isEmpty()){
            cout << "STack underflow, nothing to print" << endl;
        }
        else{
            cout << arr[top--] << "popped" << endl;  // post decrement operator(use the current value first then decrement it by 1)

            // else code this:
            // cout << arr[top] << " popped from stack." << endl;
            // top = top - 1;
        }
    }

    int peek(){
        if(isEmpty()){
            cout << "Stack is empty" << endl;
            return -1;
        }else{
            return arr[top];
        }
    }

    void display(){
        if(isEmpty()){
            cout << "Stack is empty" << endl;
        }
        else{
            cout<< "Stcak elements: " << endl;
            for(int i = top; i >=0; i--)
                cout << arr[i] << " " ;
            cout << endl;
        }
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    cout << "top" << s.peek() << endl;

    s.pop();
    s.display();

    return 0;
}