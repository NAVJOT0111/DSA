#include <iostream>
using namespace std;

// Function to print numbers using recursion
void printNumbers(int n) {
    if (n < 1) {
        return; // Base case: stop recursion when n is less than 1
    }
    cout << n << " "; // Print the current number
    printNumbers(n - 1); // Recursive call with n - 1
}

// Function to print numbers using recursion with a breakpoint
void printNumbersWithBreakpoint(int n, int breakpoint) {
    if (n < 1) {
        return; // Base case: stop recursion when n is less than 1
    }
    if (n == breakpoint) {
        cout << "Breakpoint reached at " << n << ". Halting execution." << endl;
        return; // Stop recursion when breakpoint is reached
    }
    cout << n << " "; // Print the current number
    printNumbersWithBreakpoint(n - 1, breakpoint); // Recursive call with n - 1
}

int main() {
    int n, breakpoint;
    cout << "Enter the starting number (n): ";
    cin >> n;


    cout << "\nUsing recursion:\n";
    printNumbers(n);   

    cout << "\n\nUsing recursion with a breakpoint:\n";
    cout << "Enter the breakpoint (or -1 for no breakpoint): ";
    cin >> breakpoint;
    if (breakpoint == -1) {
        printNumbers(n); // No breakpoint
    } else {
        printNumbersWithBreakpoint(n, breakpoint); // With breakpoint
    }

    return 0;
}
