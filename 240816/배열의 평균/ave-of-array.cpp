#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[2][4];
    float widthSum, heightSum, sum = 0;
    cout << fixed;
    cout.precision(1);
    for (int i = 0; i < 2; i++) {
        widthSum = 0;
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
            widthSum += arr[i][j];
            sum += arr[i][j];
        }
        cout << widthSum / 4 << " ";
    }
    cout << endl;
    for (int i = 0; i < 4; i++) {
        heightSum = 0;
        for (int j = 0; j < 2; j++) heightSum += arr[j][i];
        cout << heightSum / 2 << " ";
    }
    cout << endl;
    cout << sum / 8;
    return 0;
}