#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int weight = 13;
    double gravity_moon = 0.165;

    cout << fixed;
    cout.precision(6);

    cout << weight << " * " << gravity_moon << " = " << weight * gravity_moon;
    return 0;
}