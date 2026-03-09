#include <iostream>
using namespace std;

int Min(int a, int b, int c){
    int min = 0;

    if (a >= b){
        if (b >= c)
            min = c;
        else 
            min = b;
    }
    else {
        if (a >= c)
            min = c;
        else
            min = a;
    } 

    return min;
}

int main() {
    // Please write your code here.
    int a = 0, b = 0, c = 0;

    cin >> a >> b >> c;

    cout << Min(a, b, c) << endl;

    return 0;
}