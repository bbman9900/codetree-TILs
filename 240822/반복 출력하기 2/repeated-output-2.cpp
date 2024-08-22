#include <iostream>
using namespace std;

int HelloWorld(int n) {
    if (n == 0) return 0;
    else {
        cout << "HelloWorld\n";
        HelloWorld(n-1);
        return 0;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    HelloWorld(n);
    return 0;
}