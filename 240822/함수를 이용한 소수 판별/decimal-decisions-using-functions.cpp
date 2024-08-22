#include <iostream>
using namespace std;

void DecimalSum(int a, int b) {
    int sum = 0;
    for (a; a <= b; a++) {
        bool decimal = true;
        for (int i = 2; i < a; i++) {
            if (a % i == 0) {
                decimal = false;
                break;
            }
        }
        if (decimal) sum += a;
    }
    cout << sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    DecimalSum(a, b);
    return 0;
}