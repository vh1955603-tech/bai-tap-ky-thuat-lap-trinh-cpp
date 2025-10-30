#include <iostream>
using namespace std;

long long giaiThuaKep(int n) {
    long long gt = 1;
    for (int i = n; i > 1; i -= 2) {
        gt *= i;
    }
    return gt;
}

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Vui long nhap so nguyen duong!" << endl;
        return 0;
    }

    long long kq = giaiThuaKep(n);
    cout << n << "!! = " << kq << endl;

    return 0;
}

