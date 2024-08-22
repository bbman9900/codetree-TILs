#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char a;
    cin >> a;
    a = a + 1 > 122 ? 'a' : (char)(a + 1);
    cout << a;
    return 0;
}