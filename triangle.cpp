#include <iostream>

using namespace std;

int main() 
{
    // Nhap 3 goc va kiem tra xem thuoc loai tam giac nao
    // Khong phai tam giac, vuong, vuong can, can, deu, thuong
    int a, b, c;
    
    cout << "Nhap 3 goc cua tam giac ";
    cin >> a >> b >> c;
    
    if (a + b + c != 180) {
        cout << " Khong phai tam giac";
    } else {
        if (a == b && b == c) {
            cout << "Tam giac deu";
        } else if (a == b || b == c) {
            if (a == 90 || b == 90 || c == 90) {
                cout << "Tam giac vuong can";
            } else {
                cout << "Tam giac can";
            }
        } else if (a == 90 || b == 90 || c == 90) {
            cout << "Tam giac vuong";
        } else {
            cout << "Tam giac thuong";
        }
    }

    return 0;
}