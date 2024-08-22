#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    int sum = 0;
    cin >> s;
    for (int i = 0; s[i]; i++) sum += s[i] - '0';
    cout << sum;
    return 0;
}