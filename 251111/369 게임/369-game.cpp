#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;
    int num = 1;

    cin >> n;
    
    while (n >= num){
        if (num == 3 || num == 6 || num == 9){
            cout << 0 << " ";
        }
        else{
            cout << num << " ";
        }
        num++;
    }

    return 0;
}