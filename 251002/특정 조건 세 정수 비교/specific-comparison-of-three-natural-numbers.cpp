#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;

    int min = a;
    if (min > b)    min = b;
    if (min > c)    min = c;

    cout << (min == a) << " " << (a == b && b ==c);
    return 0;
}