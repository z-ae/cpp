#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a_m = 0, a_e = 0;
    int b_m = 0, b_e = 0;

    cin >> a_m, a_e, b_m, b_e;

    if (a_m >= b_m | a_e > b_e){
        cout << "A";
    }
    else if (a_m <= b_m | a_e < b_e){
        cout << "B";
    }
    
    return 0;
}