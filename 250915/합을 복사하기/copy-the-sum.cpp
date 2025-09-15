#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 1, b = 2, c = 3;
    int sub = a + b + c;
    a = b = c = sub;
    cout << a << " " << b << " " << c;
    return 0;
}