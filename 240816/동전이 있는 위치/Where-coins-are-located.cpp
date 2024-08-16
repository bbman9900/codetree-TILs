#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, x, y;
    cin >> n >> m;
    int arr[n][n] = {};
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        arr[x-1][y-1] = 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}