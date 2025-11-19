#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;
    int classR = 0, hall = 0, bath = 0;

    cin >> n;

    for (int i = 1; i < n + 1; i ++){
        if (i % 12 == 0){
            bath ++;
        }
        else if (i % 3 == 0){
            hall ++;
        }
        else if (i % 2 == 0){
            classR ++;
        }
    }

    cout << classR << " " << hall << " " << bath;
    

    return 0;
}