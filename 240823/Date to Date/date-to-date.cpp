#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m1, d1, m2, d2, gap = 1;
    cin >> m1 >> d1 >> m2 >> d2;
    //                         1.  2.  3.  4.  5.  6.  7.  8.  9. 10. 11. 12.
    int numOfDays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 0; i < m1; i++) gap -= numOfDays[i];
    gap -= d1;
    for (int i = 0; i < m2; i++) gap += numOfDays[i];
    gap += d2;
    if (gap < 0) gap = -gap;
    cout << gap;
    return 0;
}