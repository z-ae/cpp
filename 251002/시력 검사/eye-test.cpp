#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double a = 0, b = 0;
    cin >> a >> b;

    if (a >= 1 && b >= 1){
        cout << "High";
    }
    else if (a >= 0.5 && b >= 0.5){
        cout << "Middle";
    }
    else cout << "Low";
    return 0;
}