#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], evenSum = 0, oddSum = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (i % 2 == 0) oddSum += arr[i];
        else evenSum += arr[i];
    }
    if (evenSum >= oddSum) cout << evenSum - oddSum;
    else cout << oddSum - evenSum;
    return 0;
}