#include <iostream>
#include <string>
using namespace std;

double tinhTienDien(int soLuong) {
    double tienDien = 0;

    if (soLuong <= 100)
        tienDien = soLuong * 1418;
    else if (soLuong <= 150)
        tienDien = 100 * 1418 + (soLuong - 100) * 1622;
    else if (soLuong <= 200)
        tienDien = 100 * 1418 + 50 * 1622 + (soLuong - 150) * 2044;
    else if (soLuong <= 300)
        tienDien = 100 * 1418 + 50 * 1622 + 50 * 2044 + (soLuong - 200) * 2210;
    else if (soLuong <= 400)
        tienDien = 100 * 1418 + 50 * 1622 + 50 * 2044 + 100 * 2210 + (soLuong - 300) * 2361;
    else
        tienDien = 100 * 1418 + 50 * 1622 + 50 * 2044 + 100 * 2210 + 100 * 2361 + (soLuong - 400) * 2420;

    return tienDien;
}

int main() {
    string tenKhachHang;
    int chiSoCu, chiSoMoi;

    cout << "Nhap ten khach hang: ";
    getline(cin, tenKhachHang);

    cout << "Nhap chi so dien cu: ";
    cin >> chiSoCu;

    cout << "Nhap chi so dien moi: ";
    cin >> chiSoMoi;

    int soLuong = chiSoMoi - chiSoCu;
    if (soLuong < 0) {
        cout << "Chi so moi khong duoc nho hon chi so cu!" << endl;
        return 1;
    }

    double tienDien = tinhTienDien(soLuong);

    cout << "\n==== Thong tin tien dien ====\n";
    cout << "Ten khach hang: " << tenKhachHang << endl;
    cout << "So kWh tieu thu: " << soLuong << " kWh" << endl;
    cout << "Thanh tien: " << tienDien << " VND" << endl;

    return 0;
}

