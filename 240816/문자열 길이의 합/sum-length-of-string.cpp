#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum = 0, cnt = 0;
    cin >> n;
    string str[n];
    for (int i = 0; i < n; i++) {
        cin >> str[i];
        sum += str[i].length();
        for (int j = 0; j < str[i].length(); j++) {
            if (str[i][j] == 'a') cnt++;
        }
    }
    cout << sum << " " << cnt;
    return 0;
}