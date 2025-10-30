#include <iostream>
#include <iomanip>
using namespace std;

double tinhTienDien(int soDien) {
    double tien = 0;

    if (soDien <= 0)
        return 0;

    if (soDien <= 100)
        tien = soDien * 1418;
    else if (soDien <= 150)
        tien = 100 * 1418 + (soDien - 100) * 1622;
    else if (soDien <= 200)
        tien = 100 * 1418 + 50 * 1622 + (soDien - 150) * 2044;
    else if (soDien <= 300)
        tien = 100 * 1418 + 50 * 1622 + 50 * 2044 + (soDien - 200) * 2210;
    else if (soDien <= 400)
        tien = 100 * 1418 + 50 * 1622 + 50 * 2044 + 100 * 2210 + (soDien - 300) * 2361;
    else
        tien = 100 * 1418 + 50 * 1622 + 50 * 2044 + 100 * 2210 + 100 * 2361 + (soDien - 400) * 2420;

    return tien;
}

int main() {
    int chiSoTruoc, chiSoSau;

    cout << "Nhap chi so dien thang truoc: ";
    cin >> chiSoTruoc;
    cout << "Nhap chi so dien thang sau  : ";
    cin >> chiSoSau;

    if (chiSoSau < chiSoTruoc) {
        cout << "Chi so sau phai lon hon chi so truoc!\n";
        return 0;
    }

    int soDien = chiSoSau - chiSoTruoc;
    double tien = tinhTienDien(soDien);

    cout << fixed << setprecision(0);
    cout << "\nSo dien tieu thu: " << soDien << " kWh\n";
    cout << "Tien dien phai tra: " << tien << " VND\n";

    return 0;
}

