#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m, n, cnt;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cnt = 0;
        cin >> n;
        while (n != 1) {
            if (n % 2 == 0) n /= 2;
            else n = 3 * n + 1;
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}