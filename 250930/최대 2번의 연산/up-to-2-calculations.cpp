#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 0;
    cin >> a;

    if (a % 2 == 0){
        a /= 2;
    }
    if (a % 2 !=0){
        a += 1;
        a /= 2;
    }
    cout << a;
    return 0;
}