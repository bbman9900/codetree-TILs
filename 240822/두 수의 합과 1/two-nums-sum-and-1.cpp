#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, cnt = 0;
    string s;
    cin >> a >> b;
    s = to_string(a + b);
    for (int i = 0; s[i]; i++) if (s[i] == '1') cnt++;
    cout << cnt;
    return 0;
}