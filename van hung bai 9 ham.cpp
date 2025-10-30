#include <iostream>
#include <cstring>
using namespace std;

void daoNguocChuoi(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {
    char str[100];
    cout << "Nhap chuoi: ";
    cin.getline(str, 100);

    daoNguocChuoi(str);
    cout << "Chuoi dao nguoc: " << str << endl;

    return 0;
}

