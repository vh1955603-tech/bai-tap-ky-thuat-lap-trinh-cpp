#include <iostream>
#include <cmath>
using namespace std;

bool laTamGiac(double a, double b, double c) {
    return (a + b > c && a + c > b && b + c > a);
}

double dienTich(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

string loaiTamGiac(double a, double b, double c) {
    if (!laTamGiac(a, b, c)) return "Kh�ng ph?i tam gi�c";

    bool vuong = (fabs(a*a + b*b - c*c) < 1e-6 ||
                  fabs(a*a + c*c - b*b) < 1e-6 ||
                  fabs(b*b + c*c - a*a) < 1e-6);
    bool can = (fabs(a - b) < 1e-6 || fabs(a - c) < 1e-6 || fabs(b - c) < 1e-6);
    bool deu = (fabs(a - b) < 1e-6 && fabs(b - c) < 1e-6);

    if (deu) return "Tam gi�c �?u";
    if (vuong && can) return "Tam gi�c vu�ng c�n";
    if (vuong) return "Tam gi�c vu�ng";
    if (can) return "Tam gi�c c�n";
    return "Tam gi�c th�?ng";
}

int main() {
    double a, b, c;
    cout << "Nhap ba canh a, b, c: ";
    cin >> a >> b >> c;

    if (!laTamGiac(a, b, c)) {
        cout << "Ba canh tren khong tao thanh tam giac.\n";
    } else {
        cout << loaiTamGiac(a, b, c) << endl;
        cout << "Dien tich tam giac = " << dienTich(a, b, c) << endl;
    }

    return 0;
}

