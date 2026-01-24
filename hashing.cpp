#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    // enter array
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }

    // precompute hash table
    
    // int hash[13] = {0};
    vector<int> hash(100001, 0);

    for(int i =0; i<n; i++){
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    cout << hash[q] << endl;
}