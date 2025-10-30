#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double tienGui, laiSuat;
    int thang;

    cout << "Nhap so tien gui: ";
    cin >> tienGui;
    cout << "Nhap so thang gui: ";
    cin >> thang;
    cout << "Nhap lai suat thang (%): ";
    cin >> laiSuat;

    double tienHienTai = tienGui;

    for (int i = 1; i <= thang; i++) {
        tienHienTai = tienHienTai + tienHienTai * laiSuat / 100;
    }

    cout << fixed << setprecision(2);
    cout << "So tien co duoc sau " << thang << " thang: " << tienHienTai << endl;

    return 0;
}

