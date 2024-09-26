#pragma once

#include"NhanVien.h"
using namespace std;

class VanPhong : public NhanVien {
private: 
	int WorkDays;
public:
	VanPhong() : WorkDays(0) {}
	~VanPhong() {}
	void Nhap();
	void Xuat();
	int TinhLuong();
};