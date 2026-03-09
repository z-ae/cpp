#include <iostream>
using namespace std;

int SumDivide (int n){
    int sum = 0;

    for (int i = 1; i <= n; i++){
        sum += i;
    }

    return (sum / 10);
}

int main() {
    // Please write your code here.
    int n = 0;

    cin >> n;

    cout << SumDivide(n);

    return 0;
}