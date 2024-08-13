#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt = 0, i = 1;
    cin >> n;
    while (!(n / i <= 1)) {
        n /= i;
        i++;
        cnt++;
    }
    cout << cnt + 1;
    return 0;
}