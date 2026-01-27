#include <iostream>
using namespace std;

// arithmetic to crunch numbers like a pro. It should charm the user into entering two integers,
// perform addition, subtraction, multiplication, or division (depending on the user's mood),
// and then proudly display the result. Use pointers to juggle values between functions and
// make the magic happen.

void calc(int* a, int* b, char* op) {
    if (*op == '+'){
        cout << *a + *b;
    } 
    if (*op == '-'){
        cout << *a - *b;
    }
    if (*op == '*'){
        cout << (*a) * (*b);
    } 
    if (*op == '/'){
        cout << *a / *b;
    } 
}

int main() {
    int x, y;
    char c;
    cin >> x >> y >> c;
    calc(&x, &y, &c);
    return 0;
}
