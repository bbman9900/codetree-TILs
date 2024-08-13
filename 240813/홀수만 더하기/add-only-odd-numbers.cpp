#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, h, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> h;
        if ((h % 2 == 1) && (h % 3 == 0)) cnt++;
    }
    cout << cnt;
    return 0;
}