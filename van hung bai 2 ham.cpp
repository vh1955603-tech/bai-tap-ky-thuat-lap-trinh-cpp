#include <iostream>
#include <string>
using namespace std;

double tinhDiemThang4(double diem10) {
    if (diem10 >= 9.0) return 4.0;
    else if (diem10 >= 8.0) return 3.5;
    else if (diem10 >= 7.0) return 3.0;
    else if (diem10 >= 6.0) return 2.5;
    else if (diem10 >= 5.0) return 2.0;
    else if (diem10 >= 4.0) return 1.5;
    else return 1.0;
}

string tinhDiemChu(double diem10) {
    if (diem10 >= 9.0) return "A+";
    else if (diem10 >= 8.0) return "A";
    else if (diem10 >= 7.0) return "B+";
    else if (diem10 >= 6.0) return "B";
    else if (diem10 >= 5.0) return "C";
    else if (diem10 >= 4.0) return "D";
    else return "F";
}

int main() {
    double diem10;
    cout << "Nhap diem thang 10: ";
    cin >> diem10;

    if (diem10 < 0 || diem10 > 10) {
        cout << "Diem khong hop le! Vui long nhap tu 0 den 10.\n";
        return 0;
    }

    double diem4 = tinhDiemThang4(diem10);
    string diemChu = tinhDiemChu(diem10);

    cout << "Diem thang 10: " << diem10 << endl;
    cout << "Diem thang 4 : " << diem4 << endl;
    cout << "Diem chu     : " << diemChu << endl;

    return 0;
}

