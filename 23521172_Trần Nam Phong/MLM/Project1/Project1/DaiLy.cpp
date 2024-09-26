#include"DaiLy.h"
#include<iostream>
using namespace std;

DaiLy::DaiLy(int ma_so, string ten, int cap_bac) : ThanhVien(ma_so, ten, 2), cap(cap_bac), coin_dong_gop_thang_truoc(0) {
    ty_le_hoa_hong = 5 + cap * 3;
}

void DaiLy::inThongTin() const {
    cout << "ID: " << id << ", Ten: " << ten << ", Loai: " << loai << ", Cap: " << cap << ", Ty le hoa hong: " << ty_le_hoa_hong << "%, So du: " << so_du << endl;
}


void DaiLy::nangCap() {
    if (coin_dong_gop_thang_truoc > 500 * cap) {
        cap++;
        ty_le_hoa_hong = 5 + cap * 3;
    }
    coin_dong_gop_thang_truoc = 0;
}


void DaiLy::muaCoin(int so_coin, int &ChiPhi) {
    ChiPhi += LaiSuatThang;
    so_du += LaiSuatThang;
   tinhLaiSuatHangThang(so_coin);
}

void DaiLy::tinhLaiSuatHangThang(int so_coin) {
    LaiSuatThang += so_coin * (capNhatLaiSuat(so_coin) / 100.0);

}

int DaiLy::capNhatLaiSuat(int so_coin) {
    if (so_coin >= 201) {
        return 15;
    }
    else if (so_coin >= 101) {
        return 12;
    }
    else {
        return 10;
    }
}

void DaiLy::ThuHoaHong(int &so_coin) {
    double percent = (5 + cap * 3) * 0.01;
   so_du += so_coin * percent;
   so_coin -= so_coin * percent;
}