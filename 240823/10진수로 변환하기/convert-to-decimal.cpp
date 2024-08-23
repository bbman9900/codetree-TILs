#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string bi;
    cin >> bi;
    int num = 0;
    for (int i = 0; bi[i]; i++) num = num * 2 + (bi[i] - '0');
    cout << num;
    return 0;
}