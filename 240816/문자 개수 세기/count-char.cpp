#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    char c;
    int cnt = 0;
    getline(cin, str);
    cin >> c;
    for (int i = 0; i < str.length(); i++) if ((char)str[i] == c) cnt++;
    cout << cnt;
    return 0;
}