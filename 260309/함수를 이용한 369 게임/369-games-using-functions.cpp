#include <iostream>
using namespace std;

bool is369(int i){
    /*
    1의자리 숫자부터 확인. 있으면 1 반환, 없으면 10의 자리 숫자 확인.
    n의 자리 숫자를 확인하려 / n을 했는데, 몫이 0이면 그만.
    */
    int place = 1;

    while (i / place != 0){
        if (i / place % 3 == 0)
            return 1;
        else 
            place *= 10;
    }
}

bool isMul3(int i){
    return (i % 3 == 0);
}

int main() {
    // Please write your code here.
    int a = 0, b = 0;
    int cnt = 0;

    cin >> a >> b;

    for (int i = a; i <= b; i++){
        if (is369(i) || isMul3(i))
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}