#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    for (int i = 1; i <= 19; i++) {
        for (int j = 1; j <= 19; j++) {
            cout << i << " * " << j << " = " << i * j;
            if (j == 19) cout << endl;
            else if (j % 2 == 1) cout << " / ";
            else cout << endl;
        }
    }
    return 0;
}