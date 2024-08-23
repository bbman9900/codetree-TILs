#include <iostream>
#include <tuple>
#include <algorithm>
#include <string>
using namespace std;

class Human {
    public:
        string s; int kr, en, math;
        Human(string s, int kr, int en, int math) {
            this->s = s;
            this->kr = kr;
            this->en = en;
            this-> math = math;
        }

        Human() {}
};

bool cmp(const Human &a,const Human &b) {
    return make_tuple(a.kr, a.en, a.math) > make_tuple(b.kr, b.en, b.math);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, kr, en, math;
    string s;
    cin >> n;
    Human human[n];
    for (int i = 0; i < n; i++) {
        cin >> s >> kr >> en >> math;
        human[i] = Human(s, kr, en, math);
    }
    sort(human, human + n, cmp);
    for (int i = 0; i < n; i++) cout << human[i].s << " " << human[i].kr << " " << human[i].en << " " << human[i].math << endl;
    return 0;
}