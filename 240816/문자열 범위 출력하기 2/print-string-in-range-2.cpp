#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int n, all;
    cin >> str >> n;
    if (n > str.length()) all = str.length() - 1;
    else all = str.length() - 1 - n;
    for (int i = str.length() - 1; i > all; i--) cout << str[i];
    return 0;
}