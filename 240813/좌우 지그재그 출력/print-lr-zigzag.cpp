#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) for (int j = 0; j < n; j++) cout << cnt++ << " ";
        else {
            cnt = cnt + n - 1;
            for (int j = 0; j < n; j++) cout << cnt-- << " ";
            cnt = cnt + n + 1;
        }
        cout << endl;
    }
    return 0;
}