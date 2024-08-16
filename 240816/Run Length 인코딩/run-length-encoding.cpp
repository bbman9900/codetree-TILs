#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str, rle = "";
    int cnt = 1;
    cin >> str;
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] == str[i-1]) {
            cnt++;
            continue;
        }
        rle = rle + str[i-1] + to_string(cnt);
        cnt = 1;
    }
    rle = rle + str[str.length() - 1] + to_string(cnt);
    cout << rle.length() << endl << rle;
    return 0;
}