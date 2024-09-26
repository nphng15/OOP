#include "header.h"
void NhanVien::Nhap()
{
    cout << "Nhap ten: ";
    cin >> name;
    cout << "Nhap MSNV: ";
    cin >> MSNV;
    cout << "Nhap luong co ban: ";
    cin >> LuongCB;
}

void NhanVien::Xuat()
{
    cout << "Ten: " << name << endl;
    cout << "MSNV: " << MSNV << endl;
    cout << "Luong co ban: " << LuongCB << endl;
    cout << "Tien thuong: " << TienThuong() << endl;
}

void QuanLy::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap ti le thuong: ";
    cin >> TLT;
}

int QuanLy::TienThuong()
{
    return LuongCB * TLT;
}

void KySu::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap so gio lam them: ";
    cin >> WorkHours;
}

int KySu::TienThuong()
{
    return LuongCB + WorkHours * 100000;
}
