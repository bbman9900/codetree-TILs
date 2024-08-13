#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    bool decimal;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        decimal = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                decimal = false;
                break;
            }
        }
        if (decimal == true) cout << i << " ";
    }
    return 0;
}