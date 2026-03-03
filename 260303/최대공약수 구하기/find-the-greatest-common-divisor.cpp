#include <iostream>
using namespace std;

void PrintGCD (int n, int m){
    int min = n, max = m;

    if (n > m){
        min = m;
        max = n;
    }

    for (int i = min; i > 0; i--){
        if (min % i == 0 && max % i == 0){
            cout << i << endl;
            break;
        }
    }
}

int main() {
    int n = 0, m = 0;

    cin >> n >> m;

    PrintGCD(n, m);

    return 0;
}