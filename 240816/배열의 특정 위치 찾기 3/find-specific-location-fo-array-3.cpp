#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100], sum = 0, idx;
    for (int i = 0; i < 100; i++) {
        cin >> arr[i];
        if (arr[i] == 0) {
            idx = i - 1;
            break;
        }
    }
    cout << arr[idx] + arr[idx - 1] + arr[idx - 2];
    return 0;
}