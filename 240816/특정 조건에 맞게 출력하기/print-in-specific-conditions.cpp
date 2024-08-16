#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100], cnt = 0;
    for (int i = 0; i < 100; i++) {
        cin >> arr[i];
        if (arr[i] == 0) break;
        cnt++;
    }
    for (int i = 0; i < cnt; i++) {
        if (arr[i] % 2 == 1) cout << arr[i] + 3 << " ";
        else cout << arr[i] / 2 << " ";
    }
    return 0;
}