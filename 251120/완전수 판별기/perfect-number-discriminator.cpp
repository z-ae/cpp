#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;
    int sum = 2;

    cin >> n;

    for (int i = 2; i < n; i++){
        if (n % i == 0){
            sum += i;
            sum += (n / i);
        }
    }

    if (sum / 2 == n){
        cout << 'P';
    }
    else{
        cout << 'N';
    }

    return 0;
}