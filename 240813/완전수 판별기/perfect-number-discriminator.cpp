#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i < n; i++) if (n % i == 0) sum += i;
    cout << ((n == sum) ? "P" : "N");
    return 0;
}