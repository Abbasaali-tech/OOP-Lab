#include <iostream>
using namespace std;

// Time to code a program that manages an ever-growing hungry integer array! The array
// starts small with a size of 5, but every time you keep stuffing it with numbers and it gets
// full, it will double in size to satisfy its appetite. Once you're done feeding it all the elements,
// the array will go on a diet and shrink down to perfectly fit the number of elements it holds.
// No wasted space, no extra fluff—just a happy, well-fed array.

int main() {
    int size = 5;
    int count = 0;
    int* arr = new int[size];

    int x;
    while (cin >> x) {
        if (count == size) {
            int* temp = new int[size * 2];
            for (int i = 0; i < size; i++)
                temp[i] = arr[i];
            delete[] arr;
            arr = temp;
            size = size * 2;
        }
        arr[count] = x;
        count++;
    }

    int* fit = new int[count];
    for (int i = 0; i < count; i++)
        fit[i] = arr[i];

    delete[] arr;
    arr = fit;

    for (int i = 0; i < count; i++)
        cout << arr[i] << " ";

    delete[] arr;
    return 0;
}
