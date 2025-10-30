#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double tienCanCo, laiSuat;
    int thang;

    cout << "Nhap so tien can co: ";
    cin >> tienCanCo;
    cout << "Nhap so thang gui: ";
    cin >> thang;
    cout << "Nhap lai suat thang (%): ";
    cin >> laiSuat;

    double tienGuiToiThieu = tienCanCo / pow(1 + laiSuat / 100, thang);

    cout << fixed << setprecision(2);
    cout << "So tien gui toi thieu: " << tienGuiToiThieu << endl;

    return 0;
}

