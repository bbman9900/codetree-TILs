#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int a = n;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            for (int j = 0; j < n; j++) cout << "* ";
            cout << endl;
            continue;
        } else {
            for (int j = 0; j < 1 + 2 * (i / 2); j++) cout << "  ";
            for (int j = 0; j < a / 2; j++) cout << "*   ";
        }
        a--;
    }
    return 0;
}