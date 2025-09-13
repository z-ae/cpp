#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 5, b = 6, c = 7;
    int tmp1 = 0, tmp2 = 0, tmp3 = 0;
    tmp1 = a, tmp2 = b, tmp3 = c;
    b = tmp1;
    c = tmp2;
    a = tmp3;
    cout << a << '\n' << b << '\n' << c;
    return 0;
}