#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 2; j <= 9; j++)  //8À» 9·Î ¼öÁ¤
            cout << j << " x " << i << " = " << j * i << "\t";
        cout << endl;
    }

    return 0;

}
