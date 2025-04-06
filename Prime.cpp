#include<iostream>
using namespace std;

int main(){
    int n, i;
    bool isPrime = 1;

    cout<< "ENter the value of n" << endl;
    cin >> n;

    for(i=2; i<n; i++){
        if(n%i == 0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 0){
        cout << "Not a Prime Number" << endl;
    } else{
        cout << "is a Prime Number" << endl;
    }
}