#include <iostream>
using namespace std;

void up(int n) {
    if (n == 0) return;
    up(n - 1);
    cout << n << " ";
}

void down(int n) {
    if (n == 0) return;
    cout << n << " ";
    down(n - 1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    up(n);
    cout << endl;
    down(n);
    return 0;
}