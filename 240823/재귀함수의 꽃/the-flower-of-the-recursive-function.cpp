#include <iostream>
using namespace std;

void Fun(int n) {
    if (n == 0) return;
    cout << n << " ";
    Fun(n - 1);
    cout << n << " ";
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Fun(n);
    return 0;
}