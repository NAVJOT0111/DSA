#include <iostream>
using namespace std;

#define SIZE 5

// private: is used inside a class to hide data and methods from outside access — this is called encapsulation
// only the member functions of the class (like enqueue(), dequeue(), display()) can directly use them.
class Queue{
private:
    int arr[SIZE];
    int front, rear;

public:
    Queue(){
        front=-1;
        rear=-1;
    }

// enqueue: insert element at rear
    void enqueue(int value){
        if(rear == SIZE -1){
            cout << "Queue is full " << endl;
        }
        if(front == -1) front = 0;
        arr[++rear] = value;
        cout << value << " inserted into the queue.\n";
    }

    // dequeue: delete elemnet from front
    void dequeue(){
        if(front == -1 || front > rear){
            cout << "queue underflow " << endl;
        }
        cout << arr[front++] << "removed " << endl;
        // front++;
    }

    // peek : get the front element
    int peek(){
        if (front == -1 || front > rear) {
            cout << "Queue is Empty.\n";
            return -1;
        }
        return arr[front];
    }

    void display(){
        if (front == -1 || front > rear) {
            cout << "Queue is Empty.\n";
            return;
        }
        cout << "Queue elemnts: " << endl;
        for(int i =front; i<=rear; i++)
            cout << arr[i] ;
        cout << endl;
    }
};

int main(){
    Queue q;

     q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    cout << "Front element: " << q.peek() << endl;

    q.dequeue();
    q.display();

    return 0;
}