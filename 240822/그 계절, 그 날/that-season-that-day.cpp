#include <iostream>
using namespace std;

bool MoonCheck(int y) {
    if (y % 4 != 0 || (y % 100 == 0 && y % 400 != 0)) return false;
    else return true;
}

string Season(int y, int m, int d) {
    if (m == 12 || m <= 2) {
        if (m == 2 && d == 29) return (MoonCheck(y) ? "Winter" : "-1");
        return "Winter";
    } else if (m >= 9) return "Fall";
    else if (m >= 6) return "Summer";
    else return "Spring";
}

int main() {
    // 여기에 코드를 작성해주세요.
    int y, m, d;
    cin >> y >> m >> d;
    cout << Season(y, m, d);
    return 0;
}