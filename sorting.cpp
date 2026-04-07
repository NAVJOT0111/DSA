#include <bits/stdc++.h>
#include <vector>
using namespace std;

// algo : Start from index 1 (second element)
// Store current element as key
// Compare with previous elements
// Shift larger elements to the right
// Insert key at correct position

void insertion(vector <int>& arr, int n){
    for(int i =0; i<n; i++){
        int key = arr[i];
        int j = i - 1;

        while( j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void insertion_recur(vector <int> arr, int i, int n) {
    if (i == n) return;

    int j = i;
    // Shift the element to the left while it's smaller than its predecessor
    while (j > 0 && arr[j - 1] > arr[j]) {
        swap(arr[j-1],arr[j]);
        j--;
    }
    insertion_recur(arr, i + 1, n);
}

void merge(vector <int>& arr, int low, int mid, int high){
        vector<int> temp;
        int left = low, right = mid + 1;     // pointers

        // Merge two sorted halves
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right])
                temp.push_back(arr[left++]);
            else
                temp.push_back(arr[right++]);
        }
        while (left <= mid)
            temp.push_back(arr[left++]);

        while (right <= high)
            temp.push_back(arr[right++]);

        // Copy sorted elements back to original array
        for (int i = low; i <= high; i++)
            arr[i] = temp[i - low];             // temp starts at index 0 original array starts at low so mapping = i - low
}

void mergeSort(vector <int>& arr, int left, int right){
    if(left>=right) return;

    int mid = left + (right - left)/2 ;

    // Recursively sort left half
    mergeSort(arr,left,mid);
    // Recursively sort right half
    mergeSort(arr,mid+1, right);
    // Merge the two sorted halves
    merge(arr,left,mid,right);
}

void bubble(vector <int>& arr, int n){
    
    for(int i = n-1; i>=0; i--){
        bool swapped = false;
        for(int j =0; j <= i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped) break;  // break if already sorted - slightly improves the complexity
    }
}

void bubble_recursive(vector <int>& arr, int n){
    if(n==1) return; 

    // perform one pass- push the largest element to the last
    for(int j =0; j<n-1; j++){
        if(arr[j] > arr[j+1])
            swap(arr[j],arr[j+1]);
    }

    // recur for the remaining unsorted part
    bubble(arr);
}

void selection(vector <int> arr, int n){
    for(int i =0; i < n-1; i++){
        int minIdx = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minIdx])
                minIdx = j;
        }
        // swap the minidx with the first element of unsorted array
        swap(arr[i],arr[minIdx]);
    }
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // Find pivot index after partitioning
        int pivotIndex = partition(arr, low, high);

        // Recursively sort elements before pivot
        quickSort(arr, low, pivotIndex - 1);

        // Recursively sort elements after pivot
        quickSort(arr, pivotIndex + 1, high);
    }
}
int partition(vector<int>& arr, int low, int high) {
    // Choose the last element as pivot
    int pivot = arr[high];

    // Initialize i to place smaller elements  👉 low is just the starting index of the subarray
    int i = low - 1;

    // Traverse the array
    for (int j = low; j < high; j++) {
        // If element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            // Increment i and swap with j
            i++;
            swap(arr[i], arr[j]);
            //“Okay, I found a new smaller element, so my ‘small zone’ grows by 1”
        }
    }
    // Place pivot in correct position
    swap(arr[i + 1], arr[high]);

    // Return pivot index
    return i + 1;
}


int main(){
    vector <int> arr = {3,5,4,1,2};
    int n = arr.size();

    // insertion(arr,n);
    // mergeSort(arr,0,n-1);
    bubble_recursive(arr,n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}