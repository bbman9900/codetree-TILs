#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    int q, type;
    cin >> s >> q;
    int len = s.length();
    for (int i = 0; i < q; i++) {
        cin >> type;
        if (type == 1) {
            s = s.substr(1, len - 1) + s.substr(0, 1);
        } else if (type == 2) {
            s = s.substr(len - 1, 1) + s.substr(0, len - 1);
        } else if (type == 3) {
            string ns;
            for (int j = len - 1; j >= 0; j--) {
                ns += s[j];
            }
            s = ns;
        }
        cout << s << endl;
    }
    return 0;
}