#include <iostream>
using namespace std;

void Lcm(int n, int m) {
    if (n < m) {
        int temp = n;
        n = m;
        m = temp;
    }
    for (int i = 1; i <= n; i++) {
        if (m * i % n == 0) {
            cout << m * i;
            break;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    Lcm(n, m);
    return 0;
}