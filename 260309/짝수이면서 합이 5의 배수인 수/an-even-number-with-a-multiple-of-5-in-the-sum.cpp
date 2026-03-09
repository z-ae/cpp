#include <iostream>
using namespace std;

bool isNum(int n){
    return (n % 2 == 0 && ((n / 10) + (n % 10)) % 5 == 0);
}

int main() {
    // Please write your code here.
    int n = 0;

    cin >> n;

    if (isNum(n)){
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;

    return 0;
}