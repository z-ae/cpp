#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;
    cin >> n;

    if (n < 1000){
        cout << "no";
    }
    else if (n < 3000){
        cout << "mask";
    }
    else{
        cout << "book";
    }
    return 0;
}