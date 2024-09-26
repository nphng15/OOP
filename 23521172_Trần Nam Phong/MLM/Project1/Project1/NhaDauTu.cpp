#include"NhaDauTu.h"

#include<iostream>
using namespace std;

NhaDauTu::NhaDauTu(int ma_so, string ten, int id_dai_ly_quan_ly)
    : ThanhVien(ma_so, ten, 3), id_dai_ly(id_dai_ly_quan_ly) {
}

void NhaDauTu::inThongTin() const {
    cout << "ID: " << id << ", Ten: " << ten << ", Loai: " << loai << ", ID Dai ly: " << id_dai_ly << " So du: " << so_du << endl;
}

void NhaDauTu::muaCoin(int so_coin, int &ChiPhi) {
    ChiPhi += LaiSuatThang;
    so_du += LaiSuatThang;
    tinhLaiSuatHangThang(so_coin);
}

void NhaDauTu::tinhLaiSuatHangThang(int so_coin) {
    LaiSuatThang += so_coin* (capNhatLaiSuat(so_coin)/ 100.0);
}

int NhaDauTu::capNhatLaiSuat(int so_coin) {
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

void NhaDauTu::SetDaiLy(DaiLy* x) {
    daily = x;
}