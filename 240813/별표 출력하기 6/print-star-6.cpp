#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < n - i; j++) cout << "  ";
        for (int j = 0; j < 2 * i - 1; j++) cout << "* ";
        cout << endl;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < n - i; j++) cout << "  ";
        for (int j = 0; j < 2 * i - 1; j++) cout << "* ";
        cout << endl;
    }
    return 0;
}