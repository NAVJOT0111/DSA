#include <bits/stdc++.h>
using namespace std;

int twoStacks(int x, vector <int> a, vector <int> b){
   stack <int> s1, s2;

   for(int i =a.size() - 1; i>= 0; i--){
    s1.push(a[i]);
   }
   for(int i =b.size() - 1; i>= 0; i--){
    s2.push(b[i]);
   }

    int sum =0, count =0, maxCount = 0;
    // Temporary stack to store removed elements from A
    stack<int> removedA;

    // Step 1: Take as many from A as possible
    while (!s1.empty() && sum + s1.top() <= x) {
        sum += s1.top();
        removedA.push(s1.top());
        s1.pop();
        count++;
    }
    maxCount = count;

     // Step 2: Start taking from B
    while (!s2.empty()) {
        sum += s2.top();
        s2.pop();
        count++;

        // If sum exceeds, remove items from A (rollback)
        while (sum > x && !removedA.empty()) {
            sum -= removedA.top();
            removedA.pop();
            count--;
        }

        if (sum > x)
            break;

        maxCount = max(maxCount, count);
    }
    return maxCount;
}