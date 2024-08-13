#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, temp, sum = 0;
    cin >> a >> b;
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i <= b; i++) if (i % 5 == 0) sum += i;
    cout << sum;
    return 0;
}