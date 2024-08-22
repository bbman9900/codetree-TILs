#include <iostream>
using namespace std;

string LeapYear(int y) {
    if ((y % 100 == 0 && y % 400 != 0) || y % 4 != 0) return "false";
    else return "true";
}

int main() {
    // 여기에 코드를 작성해주세요.
    int y;
    cin >> y;
    cout << LeapYear(y);
    return 0;
}