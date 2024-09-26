#pragma once
#include<string>
using namespace std;

class NguoiLD{
public:
	int MaSoBHXH;
	int iThangBD;
	int iNamBD;
	int iThangKT;
	int iNamKT;
	int MucThuNhapThang;
	int LoaiBHXH;
	int LoaiDoiTuong;
	BHXH* bhxh = nullptr;
public:
	NguoiLD(){}
	~NguoiLD() {}

	//TinhKhoangThoiGian
	int TinhThang() {
		return iThangKT- iThangBD;
	}
	int TinhNam() {
		return iNamKT - iNamBD;
	}
	int TinhTongThang() {
		return TinhNam() * 12 + TinhThang();
	}

	void Nhap();
	void Xuat();


	int HeSoTruotGia(int iThang, int iNam);
};