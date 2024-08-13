#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int start, end, sum, cnt = 0;
    cin >> start >> end;
    for (start; start <= end; start++) {
        sum = 0;
        for (int i = 1; i < start; i++) {
            if (start % i == 0) sum += i;
        }
        if (sum == start) cnt++;
    }
    cout << cnt;
    return 0;
}