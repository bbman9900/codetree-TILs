#include <iostream>
using namespace std;

int Min(int a, int b, int c) {
    if (a > b) {
        if (b > c) return c;
        else return b;
    } else {
        if (a > c) return c;
        else return a; 
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;
    cout << Min(a, b, c);
    return 0;
}