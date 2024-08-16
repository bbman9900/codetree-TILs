#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string s, str = "";
    for (int i = 0; i < n; i++) {
        cin >> s;
        str += s;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        cout << str[i];
        if ((i + 1) % 5 == 0) cout << endl;
    }
    return 0;
}