#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;
    cin >> n;

    int size = 0;
    size = n * n;

    cout << size << '\n';
    if( n < 5){
        cout << "tiny";
    }
    return 0;
}