#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    //                      1.  2.  3.  4.  5.  6.  7.  8.  9. 10. 11. 12.
    int numOfDays[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int m1, d1, m2, d2, gap = 0, cnt = 0, dayIdx;
    string day;
    cin >> m1 >> d1 >> m2 >> d2 >> day;
    for (int i = 0; i < 7; i++) {
        if (days[i] == day) {
            dayIdx = i;
            break;
        }
    }
    for (int i = 0; i < m2; i++) gap += numOfDays[i];
    gap += d2;
    for (int i = 0; i < m1; i++) gap -= numOfDays[i];
    gap -= d1;
    cnt += gap / 7;
    if (gap % 7 >= dayIdx) cnt++;
    cout << cnt;
    return 0;
}