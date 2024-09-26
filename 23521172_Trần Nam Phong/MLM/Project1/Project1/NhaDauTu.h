#pragma once
#include"ThanhVien.h"
#include"DaiLy.h"
class NhaDauTu : public ThanhVien {
public:
    int id_dai_ly;
    DaiLy* daily;


    NhaDauTu(int ma_so, string ten, int id_dai_ly_quan_ly);
    void inThongTin() const override;
    void muaCoin(int so_coin, int &ChiPhi);
    void tinhLaiSuatHangThang(int so_coin);
    void nangCapDaiLy(map<int, ThanhVien*>& danh_sach_thanh_vien_map);
    void SetDaiLy(DaiLy*);
    bool isNhaDauTu() override {
        return true;
    }
    int getDaily() {
        return id_dai_ly;
    }
private:
    int capNhatLaiSuat(int so_coin);
};