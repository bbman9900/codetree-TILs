#include <iostream>
#include <string>
using namespace std;

class RainyDay {
    public:
        string date, days, weather;
        RainyDay(string date, string days, string weather) {
            this->date = date;
            this->days = days;
            this->weather = weather;
        }
        RainyDay() {}
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n, y = 2101, m = 13, d = 32;
    cin >> n;
    string date, days, weather;
    int yy, mm, dd;
    RainyDay rainyDay;
    for (int i = 0; i < n; i++) {
        cin >> date >> days >> weather;
        yy = stoi(date.substr(0, 4));
        mm = stoi(date.substr(5, 2));
        dd = stoi(date.substr(8, 2));
        if (weather == "Rain" && (yy <= y) && (mm <= m) && (dd <= d)) {
            y = yy; m = mm; d = dd;
            rainyDay = RainyDay(date, days, weather);
        } 
    }
    cout << rainyDay.date << " " << rainyDay.days << " " << rainyDay.weather; 

    return 0;
}