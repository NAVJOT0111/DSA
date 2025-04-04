#include <iostream>
using namespace std;

// int main(){
//     int sum = 0, i = 1,n;
//     cin>> n;
//     while(i <= n){
//         sum  += i;
//         i += 1;
//     }
//     cout << sum << endl;
// }

int main(){
    int sum=0, i=1, n;
    cin >> n;
        while(i <= n){
            if(i % 2 == 0){
                sum += i;
            }
            i += 1;
        }
        cout << sum << endl;

    }
