#include <iostream>
#include <cmath>
using namespace std;

bool laNguyenTo(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int demNguyenTo(int m, int n) {
    int dem = 0;
    for (int i = m; i <= n; i++) {
        if (laNguyenTo(i)) dem++;
    }
    return dem;
}

int main() {
    cout << "So nguyen to trong [1, 10]: " << demNguyenTo(1, 10) << endl;
    cout << "So nguyen to trong [1, 1000]: " << demNguyenTo(1, 1000) << endl;
    cout << "So nguyen to trong [1001, 100000]: " << demNguyenTo(1001, 100000) << endl;

    return 0;
}

