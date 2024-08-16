#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], evenSum = 0, third = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (i % 2 == 1) evenSum += arr[i];
        if ((i + 1) % 3 == 0) third += arr[i];
    }
    cout << fixed;
    cout.precision(1);
    cout << evenSum << " " << (float)third / 3;
    return 0;
}