#include <iostream>
using namespace std;

int n;

int Gcd(int a, int b) {
    if (a % b == 0) return b;
    return Gcd(b, a % b);
}

int Lcm(int *arr, int idx) {
    if (idx == n - 1) return arr[idx];
    int a, b;
    if (arr[idx] > arr[idx + 1]) {
        a = arr[idx];
        b = arr[idx + 1];
    } else {
        a = arr[idx + 1];
        b = arr[idx];
    }
    int gcd = Gcd(a, b);
    arr[idx + 1] = arr[idx] * arr[idx + 1] / gcd;
    return Lcm(arr, ++idx);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << Lcm(arr, 0);
    return 0;
}