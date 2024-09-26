#include<iostream>
#include"TamGiac.h"
using namespace std;
int main(){
    TamGiac tamGiac;

    cout<<"Nhap 3 diem trong tam giac:"<<endl;
    tamGiac.Nhap();
    cout<<"Tam giac ban dau:";
    tamGiac.Xuat();
    // Tịnh tiến tam giác
    tamGiac.TinhTien(2, 3);
    cout << "\nToa do cua tam giac sau khi di chuyen (2, 3):" << endl;
    tamGiac.Xuat();

    // Phóng to tam giác
    tamGiac.PhongTo(2);
    cout << "\nToa do cua tam giac sau khi phong to 2 lan:" << endl;
    tamGiac.Xuat();

    // Thu nhỏ tam giác
    tamGiac.ThuNho(3);
    cout << "\nToa do cua tam giac sau khi thu nho 3 lan:" << endl;
    tamGiac.Xuat();

    // Quay tam giác
    tamGiac.Quay(90);
    cout << "\nToa do cua tam giac sau khi quay 90 do:" << endl;
    tamGiac.Xuat();

    return 0;
}