#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, a, sum = 0, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        sum += a;
        cnt++;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (float)sum / cnt;
    return 0;
}