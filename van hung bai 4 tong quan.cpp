#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string hoTen;
    double toan, van, tin;
    
    cout << "Nhap ho ten: ";
    getline(cin, hoTen);
    cout << "Nhap diem Toan: ";
    cin >> toan;
    cout << "Nhap diem Van: ";
    cin >> van;
    cout << "Nhap diem Tin hoc: ";
    cin >> tin;

    double dtb = (toan + van + tin) / 3.0;

    string xepLoai;
    if (dtb < 5)
        xepLoai = "Yeu";
    else if (dtb < 7)
        xepLoai = "Trung binh";
    else if (dtb < 8)
        xepLoai = "Kha";
    else
        xepLoai = "Gioi";

    cout << fixed << setprecision(2);
    cout << "\nHo ten: " << hoTen << endl;
    cout << "Diem trung binh: " << dtb << endl;
    cout << "Xep loai: " << xepLoai << endl;

    return 0;
}

