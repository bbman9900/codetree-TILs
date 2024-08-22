#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    int len = str.length();
    for (int i = 0; i <= len; i++) {
        cout << str.substr(len - i, i) << str.substr(0, len - i) << endl;
    }
    return 0;
}