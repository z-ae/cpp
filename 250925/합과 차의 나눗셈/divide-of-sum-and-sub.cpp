#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 0, b = 0;
    cin >> a >> b;

    cout << fixed;
    cout.precision(2);
    cout << (a + b) / ((double)a - b);
    return 0;
}