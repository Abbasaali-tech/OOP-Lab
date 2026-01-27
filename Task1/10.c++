#include <iostream>
using namespace std;

// Implement a function that dynamically allocates an array of integers. The function should
// take an integer parameter specifying the number of elements to allocate and return a pointer
// to the allocated array.

int* makeArray(int n) {
    int* a = new int[n];
    return a;
}

int main() {
    int n;
    cin >> n;
    int* arr = makeArray(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    delete[] arr;
    return 0;
}
