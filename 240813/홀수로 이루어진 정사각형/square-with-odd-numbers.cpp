#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 11; i <= 11 + 2 * (n - 1); i += 2) {
        for (int j = i; j <= i + 2 * (n - 1); j += 2) cout << j << " ";
        cout << endl;
    }
    return 0;
}