#pragma once
#include "NhanVien.h"

class QuanLy : public NhanVien {
private:
	int TyLeThuong;
public:
	QuanLy() {}
	~QuanLy() {}

	void Nhap() {
		NhanVien::Nhap();
		cout << "Nhap ty le thuong: ";
		cin >> TyLeThuong;
	}

	int TienThuong() {
		return TyLeThuong * luongCB;
	}

	void Xuat() {
		NhanVien::Xuat();
		cout<<"Tien thuong: "<<TienThuong()<<endl;
	}
};