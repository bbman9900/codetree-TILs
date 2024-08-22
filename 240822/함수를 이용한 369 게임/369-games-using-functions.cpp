#include <iostream>
#include <string>
using namespace std;

bool CheckTriple(int num) {
    if (num % 3 == 0) return true;
    else return false;
}

bool Check369(int num) {
    string n = to_string(num);
    if (n.find("3") != string::npos || n.find("6") != string::npos || n.find("9") != string::npos) return true;
    else return CheckTriple(num);
}

int Cnt369(int a, int b) {
    int cnt = 0;
    for (a; a <= b; a++) {
        if (Check369(a)) cnt++;
    }
    return cnt;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    cout << Cnt369(a, b);
    return 0;
}