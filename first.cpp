#include<iostream>                                  // g++ -o output first.cpp 
using namespace std;                                // ./output

int main(){

    // int n;
    // cin>>n;
    // cout << "Hello" << endl;

    /*
     int a;
    cin>>a;
    
    if (a > 0){
        cout<< "a is positive" << endl;
    }
    else {
        cout<< "a is negative" <<endl;
    }
    */

    /*
    int a,b;
    // cin >> a >> b;
    // cout << "The value of a and b is: " <<a << " "<< b << endl;

    a = cin.get();                      // prints the value of ascii 
    cout << "The value of a is: " << a << endl;
    */

    int a;
    cout<< "Enter the value of a: " << endl;
    cin>> a;

    if(a>0){
        cout<< "a is positive" << endl;             // or we can do it by else if()
    }
    else{
        if(a < 0){
            cout << "a is negative" << endl;
        }
        else{
            cout << "a is zero" << endl;
        }
    }

}