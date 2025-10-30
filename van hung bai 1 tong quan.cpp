#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string tenMatHang;
    double trongLuong, donGia;
    string maChatLuong;
    int soLuong;

    cout << "Nhap ten mat hang: ";
    getline(cin, tenMatHang);  
    cout << "Nhap trong luong (kg): ";
    cin >> trongLuong;

    cout << "Nhap don gia (VND): ";
    cin >> donGia;

    cin.ignore(); 

    cout << "Nhap ma chat luong: ";
    getline(cin, maChatLuong);

    cout << "Nhap so luong: ";
    cin >> soLuong;

    cout << "\n==== Thong tin mat hang ====\n";
    cout << left << setw(15) << "Ten mat hang:" << tenMatHang << endl;
    cout << left << setw(15) << "Trong luong:" << trongLuong << " kg" << endl;
    cout << left << setw(15) << "Don gia:" << donGia << " VND" << endl;
    cout << left << setw(15) << "Ma chat luong:" << maChatLuong << endl;
    cout << left << setw(15) << "So luong:" << soLuong << endl;

    return 0;
}

