#include <iostream>
using namespace std;

// You need to make a program that works like a Matrix Wizard. First, it will ask the user for
// the size of a 2D matrix and then create it using memory magic (dynamic allocation). Next,
// the program will fill the matrix with numbers given by the user. After that, it will show off
// by doing matrix addition, subtraction, and multiplication (only if the sizes match). Finally,
// it will display the results and clean up the memory like a good, tidy wizard.

int main() {
    int r, c;
    cin >> r >> c;

    int** a = new int*[r];
    int** b = new int*[r];
    int** sum = new int*[r];

    for (int i = 0; i < r; i++) {
        a[i] = new int[c];
        b[i] = new int[c];
        sum[i] = new int[c];
    }

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> b[i][j];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < r; i++) {
        delete[] a[i];
        delete[] b[i];
        delete[] sum[i];
    }

    delete[] a;
    delete[] b;
    delete[] sum;

    return 0;
}
