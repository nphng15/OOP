#pragma once
#include "NguoiLaoDong.h"


using namespace std;

class BHXH {
protected:
	//KhoangTgian
	int iNamTruoc2014=0;
	int iNamSau2014=0;
	int iThangTruoc2014=0;
	int iThangSau2014=0;
	int MucBinhQuan;
	int MucHuongBHXH;
	NguoiLD* Nguoi;
public:
	BHXH() {}
	~BHXH() {}
	
	void setNguoiLD();
	virtual void TinhMucBinhQuan();
	virtual void TinhMucHuongBHXH();
};

class BatBuoc : public BHXH{
public:
	BatBuoc() {}
	~BatBuoc() {}

	void TinhKhoangThoiGian(int iThangBD, int iNamBD, int iThangKT, int iNamKT);
	void TinhMucBinhQuan();
	void TinhMucHuongBHXH();
};