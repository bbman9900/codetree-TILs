#include <iostream>
#include <string>
using namespace std;

bool Palindrome(string &s) {
    string r;
    for (int i = s.length() - 1; i >= 0; i--) {
        r += s[i];
    }
    return s == r;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    cout << (Palindrome(s) ? "Yes" : "No");
    return 0;
}