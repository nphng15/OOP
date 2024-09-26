#pragma once
#include "ThanhVien.h"

class DaiLy : public ThanhVien {
public:
    int cap;
    int ty_le_hoa_hong;
    int coin_dong_gop_thang_truoc;

    DaiLy(int ma_so, string ten, int cap_bac);
    void inThongTin() const override;

    void nangCap();
    void muaCoin(int so_coin, int &ChiPhi);
    void tinhLaiSuatHangThang(int so_coin);
    int capNhatLaiSuat(int so_coin);
    void ThuHoaHong(int &so_coin);
};
