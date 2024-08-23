#include <iostream>
#include <algorithm>
using namespace std;

class Student {
    public:
        int h, w, num;
        Student(int h, int w, int num) {
            this->h = h;
            this->w = w;
            this->num = num;
        }

        Student() {}
};

bool cmp(const Student &a, const Student &b) {
    if (a.h > b.h) return true;
    else if (a.h == b.h) {
        if (a.w > b.w) return true;
        else if (a.w == b.w) {
            if (a.num < b.num) return true;
            else return false;
        } else return false;
    } else return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, h, w, num;
    cin >> n;
    Student student[n];
    for (int i = 0; i < n; i++) {
        cin >> h >> w;
        student[i] = Student(h, w, i + 1);
    }
    sort(student, student + n, cmp);
    for (int i = 0; i < n; i++) cout << student[i].h << " " << student[i].w << " " << student[i].num << endl;
    return 0;
}