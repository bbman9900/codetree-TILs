#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, a, arr[100], cnt = -1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a % 2 == 0) arr[++cnt] = a;
    }
    for (cnt; cnt >= 0; cnt--) cout << arr[cnt] << " ";
    return 0;
}