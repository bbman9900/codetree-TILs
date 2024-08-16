#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[4], cnt = 0, sum;
    cin >> n;
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = 0; j < 4; j++) {
            cin >> arr[j];
            sum += arr[j];
        }
        if (sum / 4 >= 60) {
            cnt++;
            cout << "pass\n";
        } else cout << "fail\n";
    }
    cout << cnt;
    return 0;
}