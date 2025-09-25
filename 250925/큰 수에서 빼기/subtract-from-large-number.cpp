#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 0, b = 0;
    cin >> a >> b;

    int large = b, small = a;
    if (a > b){
        large = a;
        small = b;
    }

    cout << large - small;

    return 0;
}