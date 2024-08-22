#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char first, second;
    string str;
    cin >> str;
    first = str[0];
    second = str[1];
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == first) str[i] = second;
        else if (str[i] == second) str[i] = first; 
    }
    cout << str;
    return 0;
}