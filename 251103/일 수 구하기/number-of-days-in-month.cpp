#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;
    cin >> n;

    if (n % 2 == 0){
        if (n == 2)
            cout << 28;
        else if (n > 7){
            cout << 31;
        }
        else
            cout << 30;
    }
    else{
        if (n > 7)
            cout << 30;
        else    
            cout << 31;
    }

    return 0;
}