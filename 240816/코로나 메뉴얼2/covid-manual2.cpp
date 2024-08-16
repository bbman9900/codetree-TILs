#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char c[3];
    int a[3], clinic[4] = {};
    for (int i = 0; i < 3; i++) {
        cin >> c[i] >> a[i];
        if (c[i] == 'Y') {
            if (a[i] >= 37) clinic[0]++;
            else clinic[2]++;
        } else {
            if (a[i] >= 37) clinic[1]++;
            else clinic[3]++;
        }
    }
    for (int i = 0; i < 4; i++) cout << clinic[i] << " ";
    if (clinic[0] >= 2) cout << "E";
    return 0;
}