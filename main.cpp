# include <iostream>

using namespace std;

int main() {
    int h, m;
    cout << "请输入一个24小时制的时刻（小时，分钟）：";
    cin >> h >> m;
    if (((h == 0) && (m == 0)) || ((h == 24) && (m == 0)))
        cout << "0:00am";
    else if (h == 12)
        cout << h << ":" << m << "pm";
    else if ((h >= 0) && (h <= 11))
        cout << h << ":" << m << "am";
    else cout << h - 12 << ":" << m << "pm" << endl;
    return 0;


}