#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int h = 0, w = 0;
    cin >> h >> w;

    int b = (10000 * (double)w) / (h * h);
    cout << b << '\n';
    if (b >= 25){
        cout << "Obesity";
    }


    return 0;
}