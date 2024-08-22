#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b, aa, bb;
    cin >> a >> b;
    for (int i = 0; a[i]; i++) {
        if (isdigit(a[i])) aa += a[i];
        else break;
    }
    for (int i = 0; b[i]; i++) {
        if (isdigit(b[i])) bb += b[i];
        else break;
    }
    cout << stoi(aa) + stoi(bb);
    return 0;
}