#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, num = 1;
    cin >> n >> m;
    int h, w;
    int arr[n][m] = {};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            h = i;
            w = j;
            while (true) {
                if (arr[h][w] == 0) arr[h][w] = num++;
                if ((h < n - 1) && (w > 0)) {
                    h++;
                    w--;
                } else break;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}