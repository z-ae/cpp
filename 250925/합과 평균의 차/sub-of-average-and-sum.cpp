#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 0, b = 0, c = 0;
    int sum = 0, avg = 0;

    cin >> a >> b >> c;
    
    sum = a + b + c;
    avg = sum / 3;
    cout << sum << "\n" << avg << "\n" << sum - avg;
    return 0;
}