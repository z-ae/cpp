#include <iostream>
using namespace std;

void PrintNLines (int n){
    for (int i = 0; i < n; i++){
        cout << "12345^&*()_" << "\n";
    }
}

int main() {
    // Please write your code here.
    int n = 0;
    
    cin >> n;

    PrintNLines(n);
    
    return 0;
}