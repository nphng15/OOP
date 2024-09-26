#include"BHXH.h"
#include"NguoiLaoDong.h"


void BatBuoc::TinhKhoangThoiGian(int iThangBD, int iNamBD, int iThangKT, int iNamKT) {
	iNamTruoc2014 = 2014 - iNamBD;
	iThangTruoc2014 = 12 - iThangBD;
	iNamSau2014 = iNamKT - 2014;
	iThangSau2014 = iThangKT - 12;
}



void BatBuoc::TinhMucBinhQuan(){
	MucBinhQuan= (MucThuNhapThang* )
}