#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;

    int min = 0;
    if (a > b && b > c)         min = c;
    else if (a > b && b < c)    min = b;
    else                        min = a;

    cout << min;
    return 0;
}