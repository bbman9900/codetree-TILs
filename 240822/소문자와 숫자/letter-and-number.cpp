#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    for (int i = 0; s[i]; i++) {
        if (isalpha(s[i])) cout << (char)tolower(s[i]);
        else if (isdigit(s[i])) cout << s[i];
    }
    return 0;
}