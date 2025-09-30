#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int num = 0;
    cin >> num;

    switch(num){
        case 1:{
        cout << "John";
        break;
        }

        case 2:
{
        cout << "Tom";
        break;
        }
        case 3:
{
        cout << "Paul";
        break;
        }        default :
        cout << "Vacancy";
    }
    return 0;
}