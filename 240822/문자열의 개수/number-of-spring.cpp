#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s, odd[201];
    int cnt = 0;
    for (int i = 0; i < 200; i++) {
        cin >> s;
        if (s == "0") break;
        odd[cnt++] = s;
    }
    cout << cnt << endl;
    for (int i = 0; i < cnt; i++) if (i % 2 == 0) cout << odd[i] << endl;
    return 0;
}