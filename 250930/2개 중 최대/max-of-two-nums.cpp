#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 0, b = 0;
    cin >> a >> b;

    int max = b;
    if (a > b)
        max = a;

    cout << max;
    return 0;
}