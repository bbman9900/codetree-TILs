#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int input;
    cin >> str;
    while (str.length() > 1) {
        cin >> input;
        if (input > str.length() - 1) str.erase(str.length() - 1, 1);
        else str.erase(input, 1);
        cout << str << endl;
    }
    return 0;
}