#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], cnt;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] == 0) break;
        cnt = i;
    }
    for (cnt; cnt >= 0; cnt--) cout << arr[cnt] << " ";
    return 0;
}