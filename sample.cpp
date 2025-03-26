#include<iostream>  // header file library
using namespace std;    //we can use names for objects and variables from the standard library.

int main(){
    /*
    cout << "Hello World!  " <<endl;
    int a = 15;
    cout << a << endl;

    // char a = 'v';                // can't do this : error
    // cout << a << endl;

    int size = sizeof(a);
    cout << "The size of a is: " << size << endl;
    */

    int a = 'a';
    cout << a << endl;
    char ch = 98;
    cout << ch << endl;
    char ch1 = 123456;      // out of range so it'll trim the last values
    cout << ch1 << endl;

    unsigned int al = -122;      // stores only positive number
    cout << al << endl;     //the value undergoes implicit conversion to a corresponding positive value using two's complement representation.
    
    // 2/5 = 0
    // 2.0/5 = 0.4  // it also depends on the kind of variable in which it is stored
}
