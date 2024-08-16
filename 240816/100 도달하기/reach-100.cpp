#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[1001] = {1};
    cin >> n;
    arr[1] = n;
    cout << 1 << " " << n << " ";
    for (int i = 2; i < 1001; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
        cout << arr[i] << " ";
        if (arr[i] > 100) break;
    }
    return 0;
}