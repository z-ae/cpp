#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char c = 0;
    double a = 0, b = 0;
    cin >> c >> a >> b;

    cout << c << '\n';
    cout << fixed;
    cout.precision(2);
    cout << a << "\n" << b;
    return 0;
}