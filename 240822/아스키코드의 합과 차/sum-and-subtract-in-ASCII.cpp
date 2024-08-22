#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char a, b;
    cin >> a >> b;
    int gap = b < a ? a - b : b - a;
    cout << a + b << " " << gap;
    return 0;
}