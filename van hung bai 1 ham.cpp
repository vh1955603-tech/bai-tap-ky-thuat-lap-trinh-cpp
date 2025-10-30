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
    if (!laTamGiac(a, b, c)) return "Không ph?i tam giác";

    bool vuong = (fabs(a*a + b*b - c*c) < 1e-6 ||
                  fabs(a*a + c*c - b*b) < 1e-6 ||
                  fabs(b*b + c*c - a*a) < 1e-6);
    bool can = (fabs(a - b) < 1e-6 || fabs(a - c) < 1e-6 || fabs(b - c) < 1e-6);
    bool deu = (fabs(a - b) < 1e-6 && fabs(b - c) < 1e-6);

    if (deu) return "Tam giác ð?u";
    if (vuong && can) return "Tam giác vuông cân";
    if (vuong) return "Tam giác vuông";
    if (can) return "Tam giác cân";
    return "Tam giác thý?ng";
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

