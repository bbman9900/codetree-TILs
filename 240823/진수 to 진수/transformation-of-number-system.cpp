#include <iostream>
#include <string>
using namespace std;

int b;

string Converter(int num) {
    if (num < b) return to_string(num);
    return Converter(num / b) + to_string(num % b);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, num = 0;
    string n, convertB = "";
    cin >> a >> b >> n;
    for (int i = 0; n[i]; i++) num = num * a + (n[i] - '0');
    cout << Converter(num);
    return 0;
}