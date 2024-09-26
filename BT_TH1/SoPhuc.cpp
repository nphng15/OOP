#include "SoPhuc.h"
#include <iostream>

using namespace std;

void SoPhuc::Nhap() {
    cout << "Nhap phan thuc: ";
    cin >> iThuc;
    cout << "Nhap phan ao: ";
    cin >> iAo;
}

void SoPhuc::Xuat() {
    if (iAo<0) cout<<iThuc << "-" << iAo << "i" << endl;
    else cout << iThuc << " + " << iAo << "i" << endl;
}

SoPhuc SoPhuc::Tong(SoPhuc sp1, SoPhuc sp2) {
    SoPhuc tong;
    tong.iThuc = sp1.iThuc + sp2.iThuc;
    tong.iAo = sp1.iAo + sp2.iAo;
    return tong;
}

SoPhuc SoPhuc::Hieu(SoPhuc sp1, SoPhuc sp2) {
    SoPhuc hieu;
    hieu.iThuc = sp1.iThuc - sp2.iThuc;
    hieu.iAo = sp1.iAo - sp2.iAo;
    return hieu;
}

SoPhuc SoPhuc::Tich(SoPhuc sp1, SoPhuc sp2) {
    SoPhuc tich;
    tich.iThuc = sp1.iThuc * sp2.iThuc - sp1.iAo * sp2.iAo;
    tich.iAo = sp1.iThuc * sp2.iAo + sp1.iAo * sp2.iThuc;
    return tich;
}

SoPhuc SoPhuc::Thuong(SoPhuc sp1, SoPhuc sp2) {
    SoPhuc thuong;
    float mau = sp2.iThuc * sp2.iThuc + sp2.iAo * sp2.iAo;
    thuong.iThuc = (sp1.iThuc * sp2.iThuc + sp1.iAo * sp2.iAo) / mau;
    thuong.iAo = (sp1.iAo * sp2.iThuc - sp1.iThuc * sp2.iAo) / mau;
    return thuong;
}
