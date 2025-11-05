#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int temp[3] = {0};
    char sym[3];
    int a_cnt = 0;

    for (int i = 0; i < 3; i++){
        cin >> sym[i] >> temp[i];
        if ((sym[i] == 'Y') && temp[i] >= 37)
            a_cnt ++;
    }

    if (a_cnt >= 2)
        cout << "E";
    else
        cout << "N";

    return 0;
}