#include<iostream>
using namespace std;

int main(){
    int n = 10, i, a = 0, b = 1;
    for(i=1 ;i<=n ; i++ ){
        int nextNum = a+b;
        cout << nextNum << " ";

        a=b;
        b = nextNum;
    }
}
