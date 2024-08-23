#include <iostream>
#include <string>
using namespace std;

class Spy {
    public:
        string sc; char mp; int t;
        Spy(string sc, char mp, int t) {
            this->sc = sc;
            this->mp = mp;
            this->t = t;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string sc; char mp; int t;
    cin >> sc >> mp >> t;
    Spy spy1 = Spy(sc, mp, t);
    cout << "secret code : " << spy1.sc << endl;
    cout << "meeting point : " << spy1.mp << endl;
    cout << "time : " << spy1.t;
    return 0;
}