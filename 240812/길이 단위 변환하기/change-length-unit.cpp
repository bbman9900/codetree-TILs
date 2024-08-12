#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double fit = 9.2;
    double mile = 1.3;
    cout << fixed;
    cout.precision(1);
    cout << fit << "ft = " << fit * 30.48 << "cm\n";
    cout << mile << "mi = " << mile * 160934 << "cm";
    return 0;
}