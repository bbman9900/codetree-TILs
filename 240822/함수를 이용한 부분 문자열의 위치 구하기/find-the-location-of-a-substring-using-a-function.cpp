#include <iostream>
#include <string>
using namespace std;

int IdxFind(string &s, string &o) {
    if (s.find(o) != string::npos) return s.find(o);
    else -1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string input, obj;
    cin >> input >> obj;
    cout << IdxFind(input, obj);
    return 0;
}