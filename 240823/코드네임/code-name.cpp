#include <iostream>
#include <climits>
using namespace std;

class Agent {
    public:
        char cn; int sc;
        Agent(char cn, int sc) {
            this->cn = cn;
            this->sc = sc;
        }

        Agent() {}
};

int main() {
    // 여기에 코드를 작성해주세요.
    Agent agent[5];
    char cn; int sc;
    char codeName; 
    int min = INT_MAX;
    for (int i = 0; i < 5; i++) {
        cin >> cn >> sc;
        agent[i] = Agent(cn, sc);
        if (sc < min) {
            codeName = cn;
            min = sc;
        }
    }
    cout << codeName << " " << min;
    return 0;
}