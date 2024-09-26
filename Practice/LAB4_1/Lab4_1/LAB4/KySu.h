#pragma once
#include"NhanVien.h"

class KySu : public NhanVien {
private:
	int SoGioLamThem;
public:
	KySu() {}
	~KySu() {}

	void Nhap() {
		NhanVien::Nhap();
		cout<<"Nhap so gio lam them: ";
		cin >> SoGioLamThem;
	}
	int TienThuong() {
		return SoGioLamThem * 100000;
	}
	void Xuat() {
		NhanVien::Xuat();
		cout<< "Tien thuong: " << TienThuong() << endl;
	}
};