#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec = {1,2,3};
    cout << vec[0] << endl;

    vector <int> vec1(3,0);
    // vector <int> vec1(size, value);

    vector <char> hello = {'a', 'b','c', 'd', 'e'};
    for(char value : hello){
        cout << value << endl;
    }

    return 0;
}

// we use for each loop in a vector as an iterator
// .functions() : size : no of elements, 
//  push_back,
//  pop_back : last index/value delete,
// front : vector de starting di value
// at : vec[0] = vec.at(0)  , index di value print karda a 

// static allocation of memory : stack
// dynamic : heap

// capacity is different from size

// sort(v.begin(), v.end());