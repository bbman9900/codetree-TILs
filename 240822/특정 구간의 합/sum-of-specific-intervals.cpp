#include <iostream>
using namespace std;

int a[101];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, a1, a2, sum;
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) {
        sum = 0;
        cin >> a1 >> a2;
        for (a1; a1 <= a2; a1++) {
            sum += a[a1 - 1];
        }
        cout << sum << endl;
    }

    return 0;
}