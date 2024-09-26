#include "DongCo.h"

int DongCoA::getDonGia() {
	return DonGia;
}

void DongCoA::Nhap() {
	DongCo::Nhap();
}

void DongCoA::Xuat() {
	DongCo::Xuat();
}

void DongCoB::Nhap() {
	DongCo::Nhap();
	cout << "Dong co dat tieu chuan(1/2/3)?: ";
	cin >> TieuChuan;
	if (TieuChuan == 1) {
		DonGia = 600;
	} 
	else if (TieuChuan == 2) {
		DonGia = 700;
	}
	else if (TieuChuan == 3) {
		DonGia = 800;
	}
}

int DongCoB::getDonGia() {
	return DonGia;
}

void DongCoB::Xuat() {
	DongCo::Xuat();
	cout << "Dat tieu chuan: " << TieuChuan << endl;
}

void DongCoC::Nhap() {
	DongCo::Nhap();
}
void DongCoC::Xuat() {
	DongCo::Xuat();
}
int DongCoC::getDonGia() {
	return DonGia;
}