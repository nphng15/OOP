#ifndef THANH_VIEN_H
#define THANH_VIEN_H
#include <string>
#include <map>

using namespace std;

class ThanhVien {
public:
    int id;
    string ten;
    int loai;
    int so_du;
    int LaiSuatThang;

    ThanhVien(int ma_so, string ten_thanh_vien, int loai_thanh_vien);
    virtual void inThongTin() const;
    virtual void muaCoin(int so_coin, int &ChiPhi);
    int getId() {
        return id;
    }
    virtual bool isNhaDauTu() {
        return false;
    }
    
};

class GiamDoc : public ThanhVien {
public:
    double tong_hoa_hong;

    GiamDoc(int ma_so, string ten);
    void inThongTin() const override;

    void ThuCoin(int so_coin, int TienChiTra);
};

#endif
