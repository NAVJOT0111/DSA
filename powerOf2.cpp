// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     if(n==1){
//         cout <<"YES" << endl;
//         return 0; 
//     }
//     while(n){
//             int res = n%2;      // this gets the last digit of the number when viewed as decimal, not checking bitwise power of 2 logic.
//             if(res !=0){
//                 cout <<"NO" << endl;
//             } else{
//                 cout <<"YES" << endl;
//             }
//             n /= 10;        // n /= 10 divides n by 10 — this is decimal logic, not binary
//         }
//     }


#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,i;
    cin >> n;

    for(i=0; i <=30; i++){
        int ans = pow(2,i);
        if (ans == n){
            cout <<"YES" << endl;
            return 1;
        }
    }
    cout <<"no" << endl;
    return 0;
}




