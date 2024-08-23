#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Human {
    public:
        string s; int h, w;
        Human(string s, int h, int w) {
            this->s = s;
            this->h = h;
            this->w = w;
        }

        Human() {}
};

bool cmp(Human a, Human b) {
    return a.h < b.h;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, h, w;
    string s;
    cin >> n;
    Human human[n];
    for (int i = 0; i < n; i++) {
        cin >> s >> h >> w;
        human[i] = Human(s, h, w);
    }
    sort(human, human + n, cmp);
    for (int i = 0; i < n; i++) cout << human[i].s << " " << human[i].h << " " << human[i].w << endl;
    return 0;
}