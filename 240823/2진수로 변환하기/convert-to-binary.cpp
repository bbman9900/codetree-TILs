#include <iostream>
#include <string>
using namespace std;

string Binary(int n) {
    if (n == 0) return "0";
    if (n / 2 < 2) return to_string(n / 2) + to_string(n % 2);
    return Binary(n / 2) + to_string(n % 2);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << Binary(n);
    return 0;
}