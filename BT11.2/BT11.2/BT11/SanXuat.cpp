#include"SanXuat.h"

void SanXuat::Nhap() {
	NhanVien::Nhap();
	cout << "Nhap luong can ban: ";
	cin >> luongCB;
	cout << "Nhap so san pham: ";
	cin >> soSP;
}

void SanXuat::Xuat()
{
	NhanVien::Xuat();
}

int SanXuat::TinhLuong()
{
	return (luongCB * soSP) * 5000;
}

