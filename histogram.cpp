#include <bits/stdc++.h>
using namespace std;

int heights = [1,2,3,6,2];
stack <int> s;
int maxArea = 0;

for(int i =0; i< heights.size(); i++){
    while(s.top() != -1 && heights.size(); i++){
        int height = heights[s.top()];
        s.pop();
        
        int width = i - stack.top() - 1;
    maxArea = max(maxArea, height*width);
    }
    s.push(i);
}

while(s.top() != -1){
    int height = heights[s.top()];
    s.pop();
    int width = heights.size() - s.top() - 1;
    maxArea = max(maxArea, height*width);
}

return max_area;