#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int age, sum = 0, cnt = 0;
    while (1) {
        cin >> age;
        if (age / 10 != 2) break;
        sum += age;
        cnt++;
    }
    cout << fixed;
    cout.precision(2);
    cout << (float)sum / cnt;
    return 0;
}