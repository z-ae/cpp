#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 0, b = 0;
    int remain = 0;

    cin >> a >> b;

    cout << a/b << ".";

    // 나눗셈 수식 생각하면댐
    a %= b;
    for (int i = 0; i < 20; i++){
        a *= 10;
        cout << a / b;
        a %= b;
    }

    return 0;
}