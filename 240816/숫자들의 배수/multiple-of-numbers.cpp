#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, a, cnt = 0;
    cin >> n;
    a = n;
    while (cnt < 2) {
        cout << a << " ";
        if (a % 5 == 0) cnt++;
        a += n;
    }
    return 0;
}