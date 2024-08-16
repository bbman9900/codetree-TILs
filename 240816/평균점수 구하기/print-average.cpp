#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    float arr[8], sum = 0;
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
        sum += arr[i];
        cnt++;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum / cnt;
    return 0;
}