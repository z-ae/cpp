#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double N = 0;
    cin >> N;

    double ft = 30.48;
    double cm = ft * N;

    cout << fixed;
    cout.precision(1);
    cout << cm;
    return 0;
}