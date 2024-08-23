#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string id;
    int lv;
    cin >> id >> lv;
    pair<string, int> user = make_pair(id, lv);
    cout << "user codetree lv 10\n";
    cout << "user " << user.first << " lv " << user.second;
    return 0;
}