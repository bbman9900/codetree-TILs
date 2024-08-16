#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char arr[10];
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (i % 3 == 1) cout << arr[i] << " ";
    }
    return 0;
}