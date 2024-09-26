#pragma once
#ifndef THANH_VIEN_H
#define THANH_VIEN_H

#include <string>

using namespace std;

class ThanhVien {
public:
    int id;
    string ten;
    int loai;
    double so_du;

    ThanhVien(int ma_so, string ten_thanh_vien, int loai_thanh_vien);

    virtual void inThongTin() const;
    virtual void muaCoin(int so_coin);
};

class GiamDoc : public ThanhVien {
public:
    GiamDoc(int ma_so, string ten);

    void inThongTin() const override;
};

class DaiLy : public ThanhVien {
public:
    int cap;
    double ty_le_hoa_hong;

    DaiLy(int ma_so, string ten, int cap_bac);

    void inThongTin() const override;
    void muaCoin(int so_coin) override;
};

class NhaDauTu : public ThanhVien {
public:
    int id_dai_ly;
    double coin_dau_tu;
    double ty_le_lai_suat;
    int so_thang_dau_tu;

    NhaDauTu(int ma_so, string ten, int id_dai_ly_quan_ly);

    void inThongTin() const override;
    void muaCoin(int so_coin) override;
    void tinhLaiSuatHangThang();
    void nangCapDaiLy();
private:
    void capNhatLaiSuat();
};

#endif