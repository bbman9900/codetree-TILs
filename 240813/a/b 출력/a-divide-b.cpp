#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    // 변수 선언 및 입력
    int a, b;
    cin >> a >> b;

    // 정수 부분을 먼저 출력합니다.
    cout << a / b << ".";

    // a를 b로 나눈 나머지를 시작으로
    // 소수점 자리를 하나씩 계산합니다.
    a %= b;
    for (int i = 0; i < 20; i++) {
        // 나머지에 10 곱한 값을 기준으로
        // b로 나누었을 떄의 몫을 구해줍니다.
        a *= 10;
        cout << a / b;

        // a를 b로 나눈 나머지를 게속 갱신해줍니다.
        a %= b;
    }
    return 0;
}