#include <iostream>
using namespace std;

int main(){
    int m,n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    m = n;
    int mask = 0;

    if(n == 0){
        cout << 0 << endl;
        return 0; 
    }

    while(m){
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    cout << ans << endl;
}