#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int k = 1, l = n;
    for (int i = 1; i <= 2 * n; i++) {
        if (i % 2 == 1) {
            for (int j = 0; j < k; j++) {
                cout << "* ";
            }
            k++;
        } else {
            for (int j = 0; j < l; j++) {
                cout << "* ";
            }
            l--;
        }
        cout << endl;
    }
    return 0;
}