#include <iostream>
using namespace std;

int main() {
    double tienGui, tienNhan, laiSuat;
    int thang = 0;

    cout << "Nhap so tien gui: ";
    cin >> tienGui;
    cout << "Nhap so tien muon co: ";
    cin >> tienNhan;
    cout << "Nhap lai suat thang (%): ";
    cin >> laiSuat;

    double tienHienTai = tienGui;

    while (tienHienTai < tienNhan) {
        thang++;
        tienHienTai = tienHienTai + tienHienTai * laiSuat / 100;
    }

    cout << "So thang it nhat phai gui: " << thang << endl;

    return 0;
}

