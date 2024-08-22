#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    while (true) {
        cin >> s;
        if (s == "END") break;
        for (int i = s.length() - 1; i >= 0; i--) {
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}