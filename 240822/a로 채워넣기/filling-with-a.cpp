#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string input;
    cin >> input;
    input[1] = 'a';
    input[input.length() - 2] = 'a';
    cout << input;
    return 0;
}