#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 2; j <= 8; j++)  //8을 9로 수정
            cout << j << " x " << i << " = " << j * i << "\t";
        cout << endl;
    }

    return 0;

}