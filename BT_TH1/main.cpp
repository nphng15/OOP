#include "SoPhuc.h"
#include <iostream>

using namespace std;

int main() {
    SoPhuc sp1, sp2, kq;
    
    cout << "Nhap so phuc thu nhat: " << endl;
    sp1.Nhap();
    cout << "Nhap so phuc thu hai: " << endl;
    sp2.Nhap();

    cout << "\nCac phep toan tren so phuc:" << endl;
    
    kq = kq.Tong(sp1, sp2);
    cout << "Tong: ";
    kq.Xuat();
    
    kq = kq.Hieu(sp1, sp2);
    cout << "Hieu: ";
    kq.Xuat();
    
    kq = kq.Tich(sp1, sp2);
    cout << "Tich: ";
    kq.Xuat();
    
    kq = kq.Thuong(sp1, sp2);
    cout << "Thuong: ";
    kq.Xuat();
    
    return 0;
}
