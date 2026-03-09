#include <iostream>
using namespace std;

void PrintLcm(int n, int m) {
    int small = n, big = m;
    int multiple = 0;
    int i = 1;

    if (n > m){
        small = m;
        big = n;
    }

    while (1){
        multiple = big * i;
        
        if (multiple % small == 0){
            cout << multiple;
            break;
        }

        i++;
    }
}
int main() {
    // Please write your code here.
    int n = 0, m = 0;

    cin >> n >> m;

    PrintLcm(n, m);

    return 0;
}