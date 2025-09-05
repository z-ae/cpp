#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double cm_per_ft = 30.48;
    double cm_per_mi = 160934;

    cout << fixed;
    cout.precision(1);

    cout << "9.2ft = " << cm_per_ft * 9.2 << "cm\n";
    cout << "1.3mi = " << cm_per_mi * 1.3 << "cm";
    return 0;
}