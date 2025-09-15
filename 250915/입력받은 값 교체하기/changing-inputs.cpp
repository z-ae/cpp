#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 0, b = 0;
    int tmp = 0;

    cin >> a >> b;

    tmp = a;
    a = b;
    b = tmp;

    cout << a << " " << b;

    return 0;
}