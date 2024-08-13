#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int aa, ba;
    char as, bs;
    cin >> aa >> as >> ba >> bs;
    if ((aa >= 19) && (as == 'M') || (ba >= 19) && (bs == 'M')) cout << 1;
    return 0;
}