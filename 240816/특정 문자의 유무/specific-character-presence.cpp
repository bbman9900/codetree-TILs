#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str, ee = "No", ab = "No";
    cin >> str;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str.substr(i, 2) == "ee") ee = "Yes";
        else if (str.substr(i, 2) == "ab") ab = "Yes";
        if ((ee == "Yes") && (ab == "Yes")) break;
    }
    cout << ee << " " << ab;
    return 0;
}