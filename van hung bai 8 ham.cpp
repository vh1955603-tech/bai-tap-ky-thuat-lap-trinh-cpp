#include <iostream>
#include <cstring>  
using namespace std;

int isStrongPassword(char *pw) {
    if (strlen(pw) < 8)
        return 0;

    bool hasUpper = false, hasLower = false, hasDigit = false;

    for (int i = 0; pw[i] != '\0'; i++) {
        if (pw[i] >= 'A' && pw[i] <= 'Z') hasUpper = true;
        else if (pw[i] >= 'a' && pw[i] <= 'z') hasLower = true;
        else if (pw[i] >= '0' && pw[i] <= '9') hasDigit = true;
    }

    return (hasUpper && hasLower && hasDigit) ? 1 : 0;
}

int main() {
    char pw[100];
    cout << "Nhap mat khau: ";
    cin >> pw;

    if (isStrongPassword(pw))
        cout << "Mat khau manh\n";
    else
        cout << "Mat khau yeu\n";

    return 0;
}

