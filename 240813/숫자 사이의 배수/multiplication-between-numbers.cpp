#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, cnt = 0, sum = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if ((i % 5 == 0) || (i % 7 == 0)) {
            cnt++;
            sum += i;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (float)sum / cnt;
    return 0;
}