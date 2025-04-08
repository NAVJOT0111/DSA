#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter the values of a and b: " << endl;
    cin >> a >> b; 

    char op;
    cout << "ENter the operation" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << (a+b) << endl; break;
    case '-':
        cout << (a-b) << endl; break;
    case '*':
        cout << (a*b) << endl; break;
    case '/':
        cout << (a/b) << endl; break;
    
    default:
    cout << "ENter a valid operator " << endl;
        break;
    }
}