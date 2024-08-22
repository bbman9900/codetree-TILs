#include <iostream>
using namespace std;

bool MoonCheck(int y) {
    if (y % 4 != 0 && (y % 100 == 0 && y % 400 != 0)) return false;
    else return true;
}

void Season(int y, int m, int d) {
    if (m == 12 || m <= 2) {
        if (m == 2 && d >= 29) cout << (MoonCheck(y) ? "Winter" : "-1");
        else cout << "Winter";
    } else if (m >= 9) cout << "Fall";
    else if (m >= 6) cout << "Summer";
    else cout << "Spring";
}

int main() {
    // 여기에 코드를 작성해주세요.
    int y, m, d;
    cin >> y >> m >> d;
    Season(y, m, d);
    return 0;
}