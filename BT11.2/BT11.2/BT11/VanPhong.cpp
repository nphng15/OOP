#include "VanPhong.h"

void VanPhong::Nhap() {
	NhanVien::Nhap();
	cout << "Nhap so ngay lam viec: ";
	cin >> WorkDays;
}

void VanPhong::Xuat() {
	NhanVien::Xuat();
}

int VanPhong::TinhLuong() {
	return WorkDays * 100000;
}