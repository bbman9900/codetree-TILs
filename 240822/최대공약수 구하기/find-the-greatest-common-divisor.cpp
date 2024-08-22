#include <iostream>
using namespace std;

void Gcd(int n, int m) {
    if (n < m) {
        int temp = n;
        n = m;
        m = temp;
    }
    for (int i = m; i > 0; i--) {
        if (n % i == 0 && m % i == 0) {
            cout << i;
            break;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    Gcd(n, m);
    return 0;
}