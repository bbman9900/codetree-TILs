#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str[] = {"apple", "banana", "grape", "blueberry", "orange"};
    char c;
    cin >> c;
    int cnt = 0;
    for (int i = 0; i < 5; i++) {
        if (str[i][2] == c || str[i][3] == c) {
            cnt++;
            cout << str[i] << endl;
        }
    }
    cout << cnt;
    return 0;
}