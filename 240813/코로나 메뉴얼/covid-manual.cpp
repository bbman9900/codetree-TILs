#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int t1, t2, t3, count = 0;
    char c1, c2, c3;
    cin >> c1 >> t1 >> c2 >> t2 >> c3 >> t3;
    if ((c1 == 'Y') && (t1 >= 37)) count += 1;
    if ((c2 == 'Y') && (t2 >= 37)) count += 1;
    if ((c3 == 'Y') && (t3 >= 37)) count += 1;
    cout << ((count >= 2) ? "E" : "N");
    return 0;
}