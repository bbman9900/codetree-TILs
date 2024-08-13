#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, h, sum;
    cin >> n;
    h = 100 - n + 1;
    sum = h * (n + 100) / 2;
    cout << sum;
    return 0;
}