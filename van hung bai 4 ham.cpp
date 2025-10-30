#include <iostream>
#include <cmath>  
#include <iomanip>
using namespace std;

double tinhTienTietKiem(double soTienGoc, int soThang, double laiSuatThang) {
    double r = laiSuatThang / 100.0;

    double tongTien = soTienGoc * pow(1 + r, soThang);

    return tongTien;
}

int main() {
    double soTienGoc, laiSuatThang;
    int soThang;

    cout << "Nhap so tien gui (VND): ";
    cin >> soTienGoc;

    cout << "Nhap so thang gui: ";
    cin >> soThang;

    cout << "Nhap lai suat 1 thang (%): ";
    cin >> laiSuatThang;

    double tongTien = tinhTienTietKiem(soTienGoc, soThang, laiSuatThang);

    cout << fixed << setprecision(0);
    cout << "\nSo tien ban dau: " << soTienGoc << " VND\n";
    cout << "So thang gui: " << soThang << endl;
    cout << "Lai suat thang: " << laiSuatThang << " %\n";
    cout << "Tong so tien nhan duoc sau " << soThang << " thang: "
         << tongTien << " VND\n";

    return 0;
}

