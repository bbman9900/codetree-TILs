#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        cout << arr[i] * arr[i] << " ";
    }
    return 0;
}