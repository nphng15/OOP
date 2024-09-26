#pragma once
#include "NhanVien.h"

class SanXuat : public NhanVien {
private:
	int luongCB;
	int soSP;
public:
	SanXuat() : luongCB(0), soSP(0) {}
	~SanXuat() {}
	void Nhap();
	void Xuat();
	int TinhLuong();
};