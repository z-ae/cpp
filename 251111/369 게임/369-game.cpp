#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;
    int num = 1;

    cin >> n;

/*  3 6 9       3으로 나눠떨어짐
    13 16 19    10의 자릿수 && num을 10으로 나눈 나머지가 3으로 나눠떨어짐
    30 31 ...   10의 자리가 3으로 나눠떨어짐 */

    while (n >= num){

        if (num % 3 == 0)
            cout << 0 << " ";
        else cout << num << " ";
        
        if (num / 10 > 0){
            if      ((num % 10 != 0) && ((num % 10) % 3 == 0))   cout << 0<< " ";
            else if ((num / 10) % 3 == 0)   cout << 0 << " ";
            else                            cout << num << " ";

        }


        num++;
    }

    return 0;
}