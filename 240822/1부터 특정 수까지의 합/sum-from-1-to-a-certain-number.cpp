#include <iostream>
using namespace std;

int DivideSum(int n) {
    int sum = 0;
    sum = (n + 1) * n / 2;
    return sum / 10; 
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << DivideSum(n);
    return 0;
}