#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string input, obj;
    int idx = -1;
    cin >> input >> obj;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == obj[0]) {
            for (int j = 0; j < obj.length(); j++) {
                if (input[i+j] != obj[j]) break;
                if (j == obj.length() - 1) idx = i;
            }
        }
        if (idx != -1) break;
    }
    cout << idx;
    return 0;
}