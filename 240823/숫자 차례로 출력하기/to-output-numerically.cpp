#include <iostream>
using namespace std;

int up(int now, int n) {
    cout << now << " ";
    if (now < n) up(now + 1, n);
    return 0;
}

int down(int n) {
    cout << n << " ";
    if (n > 1) down(n - 1);
    return 0;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    up(1, n);
    cout << endl;
    down(n);
    return 0;
}