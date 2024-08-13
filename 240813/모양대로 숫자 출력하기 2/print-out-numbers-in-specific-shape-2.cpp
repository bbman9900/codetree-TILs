#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, gugu = 2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << gugu << " ";
            gugu += 2;
            if (gugu > 9) gugu = 2;
        }
        cout << endl;
    }
    return 0;
}