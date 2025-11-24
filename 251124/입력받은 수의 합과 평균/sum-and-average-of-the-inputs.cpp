#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;
    int input = 0;
    int sum = 0;
    double avg = 0;

    cout << fixed;
    cout.precision(1);

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> input;
        sum += input;
    }
    avg = (double)sum / n;

    cout << sum << " " << avg;
    
    return 0;
}