#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 0, b = 0;
    cin >> a >> b;

    if (a > b)
        cout << a * b;
    else
        cout << b / a;
    return 0;
}