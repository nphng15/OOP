#include "ThanhVien.h"
#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

ThanhVien::ThanhVien(int ma_so, string ten_thanh_vien, int loai_thanh_vien)
    : id(ma_so), ten(ten_thanh_vien), loai(loai_thanh_vien), so_du(0) {}

void ThanhVien::inThongTin() const {
    cout << "ID: " << id << ", Ten: " << ten << ", Loai: " << loai << ", So du: " << so_du << endl;
}

void ThanhVien::muaCoin(int so_coin) {}

GiamDoc::GiamDoc(int ma_so, string ten) : ThanhVien(ma_so, ten, 1) {}

void GiamDoc::inThongTin() const {
    cout << "ID: " << id << ", Ten: " << ten << ", Loai: " << loai << ", So du: " << so_du << endl;
}

DaiLy::DaiLy(int ma_so, string ten, int cap_bac) : ThanhVien(ma_so, ten, 2), cap(cap_bac) {
    ty_le_hoa_hong = 5 + cap * 3;
}

void DaiLy::inThongTin() const {
    cout << "ID: " << id << ", Ten: " << ten << ", Loai: " << loai << ", Cap: " << cap << ", Ty le hoa hong: " << ty_le_hoa_hong << "%, So du: " << so_du << endl;
}

void DaiLy::muaCoin(int so_coin) {
    so_du += so_coin;
}

NhaDauTu::NhaDauTu(int ma_so, string ten, int id_dai_ly_quan_ly)
    : ThanhVien(ma_so, ten, 3), id_dai_ly(id_dai_ly_quan_ly), coin_dau_tu(0), so_thang_dau_tu(0) {
    capNhatLaiSuat();
}

void NhaDauTu::inThongTin() const {
    cout << "ID: " << id << ", Ten: " << ten << ", Loai: " << loai << ", ID Dai ly: " << id_dai_ly << ", Coin dau tu: " << coin_dau_tu << ", Ty le lai suat: " << ty_le_lai_suat << "%, So du: " << so_du << endl;
}

void NhaDauTu::muaCoin(int so_coin) {
    coin_dau_tu += so_coin;
    capNhatLaiSuat();
}

void NhaDauTu::tinhLaiSuatHangThang() {
    so_du += coin_dau_tu * (ty_le_lai_suat / 100);
}

void NhaDauTu::capNhatLaiSuat() {
    if (coin_dau_tu >= 201) {
        ty_le_lai_suat = 15;
    }
    else if (coin_dau_tu >= 101) {
        ty_le_lai_suat = 12;
    }
    else {
        ty_le_lai_suat = 10;
    }
}

void xuatTinhTrangTaiChinhThangCuoi(map<int, ThanhVien*>& danh_sach_thanh_vien) {
    for (auto& entry : danh_sach_thanh_vien) {
        cout << entry.first << " " << fixed << setprecision(0) << entry.second->so_du << endl;
    }
}