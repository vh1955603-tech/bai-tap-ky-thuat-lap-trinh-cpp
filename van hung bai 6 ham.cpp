#include <iostream>
#include <cmath>
using namespace std;

int soThangGuiItNhat(double soTienBanDau, double soTienCanCo, double laiSuatThang) {
    double r = laiSuatThang / 100.0;
    int n = 0;
    double tienHienTai = soTienBanDau;

    while (tienHienTai < soTienCanCo) {
        tienHienTai *= (1 + r);
        n++;
    }

    return n;
}

int main() {
    double P, A, r;
    cout << "Nhap so tien ban dau: ";
    cin >> P;
    cout << "Nhap so tien can co: ";
    cin >> A;
    cout << "Nhap lai suat thang (%): ";
    cin >> r;

    int n = soThangGuiItNhat(P, A, r);
    cout << "So thang gui it nhat: " << n << " thang\n";

    return 0;
}

