#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m;
    cin >> m;
    if (m == 12) {
        cout << "Winter";
        return 0;
    } else if (m >= 9) cout << "Fall";
    else if (m >= 6) cout << "Summer";
    else if (m >= 3) cout << "Spring";
    else cout << "Winter";

    return 0;
}