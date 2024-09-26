#include "ThanhVien.h"

#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

ThanhVien::ThanhVien(int ma_so, string ten_thanh_vien, int loai_thanh_vien)
    : id(ma_so), ten(ten_thanh_vien), loai(loai_thanh_vien), so_du(0), LaiSuatThang(0) {}

void ThanhVien::inThongTin() const {
    cout << "ID: " << id << ", Ten: " << ten << ", Loai: " << loai << ", So du: " << so_du << endl;
}

void ThanhVien::muaCoin(int so_coin, int &ChiPhi) {}

GiamDoc::GiamDoc(int ma_so, string ten) : ThanhVien(ma_so, ten, 1), tong_hoa_hong(0) {}

void GiamDoc::inThongTin() const {
    cout << "ID: " << id << ", Ten: " << ten << ", Loai: " << loai << ", So du: " << so_du << ", Tong hoa hong: " << tong_hoa_hong << endl;
}

void GiamDoc::ThuCoin(int so_coin, int TienChiTra) {
     so_du += so_coin;
	 so_du -= TienChiTra;
}