#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; s[i]; i++) {
        if (isdigit(s[i])) sum += s[i] - '0';
    }
    cout << sum;
    return 0;
}