#include <iostream>
using namespace std;

// int main(){
//     int n, i = 1;                                            // **** - 4 TIMES
//     cout << "enter no of rows: " << endl;
//     cin >> n;
//     while(i <= n){
//         int j = 1;
//         while(j <=n){
//             cout << "*";
//             j += 1;
//         }
//         cout << endl;
//         i += 1;
//     }
// }

// int main(){
//     int n , i = 1, j = 1;                        // 1111 \n 2222 \n 3333 \n 4444
//     cin>> n;
//     while (i <= n){
//         while ( j <= n){
//             cout << i;
//             j += 1;
//         }
//         cout << endl;
//         i += 1;
//     }
// }

// int main(){
//     int n , i = 1;
//     cin >> n;
//     while (i <= n){
//         int j = 1;              //pehli var ch galat hoya si: not setting the value of j = 1 after each iteration
//         while ( j <= n){                    //  // 1234 - 4 times
//             cout << j;
//             j += 1;
//         }
//         cout << endl;
//         i += 1;
//     }
// }

// int main(){
//     int n , i =1;                                                    // 4321 - 4 times
//     cin>> n;
//     while(i <= n){
//         int j = 1;
//         while(j <= n){
//             cout << n-j+1 ;
//             j += 1;
//         }
//         cout << endl;
//         i += 1;
//     }
// }                                                                       
  
int main(){
    int n, i = 1, count = 1;
    cin >> n;
    while(i <= n){
        int j = 1;
        while ( j <= n){
            cout << count << " ";
            count += 1;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}