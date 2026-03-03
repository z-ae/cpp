#include <iostream>
using namespace std;

void PrintSquare(int n){
    int index = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (index == 9)
                index = 0;
            index++;
            cout << index << " ";
        }
        cout << endl;
    }
}

int main() {
    // Please write your code here.
    int n = 0;

    cin >> n;

    PrintSquare(n);

    return 0;
}