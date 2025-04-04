#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<< "ENter the character: " << endl;
    cin>> a ;
    b = cin.get();
    if (b >= 65 && b<= 90){
        cout<< "This is Uppercase" << endl;
    }
    else if(b>=97 && b<=122){
        cout<< "This is lowercase" << endl;
    }
    else if(b>=48 && b<=57){
        cout << "This is numeric" << endl;
    }
    else{
        cout << "ENter a valid value" << endl;
    }

}