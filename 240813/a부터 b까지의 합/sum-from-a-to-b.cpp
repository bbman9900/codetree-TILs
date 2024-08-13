#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, sum, n;
    cin >> a >> b;

    // 항의 개수를 계산합니다.
    n = b - a + 1;
    
    // 등차수열의 합을 계산합니다.
    sum = n * (a + b) / 2;
    cout << sum;
    return 0;
}