#include <iostream>
using namespace std;

void swap(int &n, int &m) {
    int temp = n;
    n = m;
    m = temp;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    swap(n, m);
    cout << n << " " << m;
    return 0;
}