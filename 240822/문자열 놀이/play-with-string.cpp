#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    int q, type, first, second;
    char a, b;
    cin >> s >> q;
    for (int i = 0; i < q; i++) {
        cin >> type;
        if (type == 1) {
            cin >> first >> second;
            char temp = s[--first];
            s[first] = s[--second];
            s[second] = temp;
        }
        else {
            cin >> a >> b;
            for (int j = 0; j < s.length(); j++) {
                if (s[j] == a) s[j] = b;
            }
        }
        cout << s << endl;
    }
    return 0;
}