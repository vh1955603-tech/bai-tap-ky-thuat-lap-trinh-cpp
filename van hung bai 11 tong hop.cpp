#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int giaSP, tienNguoiMua;
        cin >> giaSP >> tienNguoiMua;

        int tienThua = tienNguoiMua - giaSP;
        int to10 = tienThua / 10;
        int rem10 = tienThua % 10;

        int to5 = -1, to1 = -1;
        bool found = false;

        for (int f = 0; f <= 1 && !found; f++) {
            for (int o = 0; o <= 4 && !found; o++) {
                if (f * 5 + o == rem10) {
                    to5 = f;
                    to1 = o;
                    found = true;
                }
            }
        }

        cout << tienThua << " = " << to10 << " * 10 + " << to5 << " * 5 + " << to1 << " * 1\n";
    }
    return 0;
}

