#include <iostream>
#include <string>
#include <cmath>
#include <map>
#include <iomanip>

using namespace std;

class ThanhVien {
public:
    int id;
    string ten;
    int loai;
    double so_du;

    ThanhVien(int ma_so, string ten_thanh_vien, int loai_thanh_vien) : id(ma_so), ten(ten_thanh_vien), loai(loai_thanh_vien), so_du(0) {}

    virtual void inThongTin() const {
        cout << "ID: " << id << ", Ten: " << ten << ", Loai: " << loai << ", So du: " << so_du << endl;
    }

    virtual void muaCoin(int so_coin) {}
};

class GiamDoc : public ThanhVien {
public:
    GiamDoc(int ma_so, string ten) : ThanhVien(ma_so, ten, 1) {}

    void inThongTin() const override {
        cout << "ID: " << id << ", Ten: " << ten << ", Loai: " << loai << ", So du: " << so_du << endl;
    }
};

class DaiLy : public ThanhVien {
public:
    int cap;
    double ty_le_hoa_hong;

    DaiLy(int ma_so, string ten, int cap_bac) : ThanhVien(ma_so, ten, 2), cap(cap_bac) {
        ty_le_hoa_hong = 5 + cap * 3;
    }

    void inThongTin() const override {
        cout << "ID: " << id << ", Ten: " << ten << ", Loai: " << loai << ", Cap: " << cap << ", Ty le hoa hong: " << ty_le_hoa_hong << "%, So du: " << so_du << endl;
    }

    void muaCoin(int so_coin) override {
        so_du += so_coin;
    }
};

class NhaDauTu : public ThanhVien {
public:
    int id_dai_ly;
    double coin_dau_tu;
    double ty_le_lai_suat;
    int so_thang_dau_tu;

    NhaDauTu(int ma_so, string ten, int id_dai_ly_quan_ly) : ThanhVien(ma_so, ten, 3), id_dai_ly(id_dai_ly_quan_ly), coin_dau_tu(0), so_thang_dau_tu(0) {
        capNhatLaiSuat();
    }

    void inThongTin() const override {
        cout << "ID: " << id << ", Ten: " << ten << ", Loai: " << loai << ", ID Dai ly: " << id_dai_ly << ", Coin dau tu: " << coin_dau_tu << ", Ty le lai suat: " << ty_le_lai_suat << "%, So du: " << so_du << endl;
    }

    void muaCoin(int so_coin) override {
        coin_dau_tu += so_coin;
        capNhatLaiSuat();
    }

    void tinhLaiSuatHangThang() {
        so_du += coin_dau_tu * (ty_le_lai_suat / 100);
    }

private:
    void capNhatLaiSuat() {
        if (coin_dau_tu >= 201) {
            ty_le_lai_suat = 15;
        } else if (coin_dau_tu >= 101) {
            ty_le_lai_suat = 12;
        } else {
            ty_le_lai_suat = 10;
        }
    }
};

void nhap_du_lieu(ThanhVien** danh_sach_thanh_vien, int so_luong) {
    for (int i = 0; i < so_luong; ++i) {
        int loai_thanh_vien;
        int id;
        string ten;
        
        cin >> id >> loai_thanh_vien >> ten;

        if (loai_thanh_vien == 1) {
            danh_sach_thanh_vien[i] = new GiamDoc(id, ten);
        } else if (loai_thanh_vien == 2) {
            int cap_bac;
            cin >> cap_bac;
            danh_sach_thanh_vien[i] = new DaiLy(id, ten, cap_bac);
        } else if (loai_thanh_vien == 3) {
            int id_dai_ly_quan_ly;
            cin >> id_dai_ly_quan_ly;
            danh_sach_thanh_vien[i] = new NhaDauTu(id, ten, id_dai_ly_quan_ly);
        } else {
            cout << "Loai thanh vien khong hop le." << endl;
            --i; // Nhap lai thanh vien
        }
    }
}

void nhap_lich_su_mua_coin(map<int, ThanhVien *> &danh_sach_thanh_vien, int so_thang, int so_luong)
{
    for (int i = 0; i < so_thang; ++i)
    {
        for (int j=1; j<so_luong; j++)
        {
            int id_nguoi_nop;
            int so_coin;
            cin >> id_nguoi_nop >> so_coin;
            if (danh_sach_thanh_vien.find(id_nguoi_nop) != danh_sach_thanh_vien.end())
            {
                danh_sach_thanh_vien[id_nguoi_nop]->muaCoin(so_coin);
            }
            else
            {
                cout << "ID nguoi nop khong ton tai." << endl;
            }
        }
    }
}


void xuat_tinh_trang_tai_chinh_cua_he_thong(map<int, ThanhVien*>& danh_sach_thanh_vien) {

    for (auto& entry : danh_sach_thanh_vien) {
        cout << entry.first << " " << fixed << setprecision(0) << entry.second->so_du << endl;
    }
}

int main() {
    int so_luong, so_thang;

    // Nhap thong tin

    cin >> so_luong;

    cin >> so_thang;
    
    ThanhVien** danh_sach_thanh_vien = new ThanhVien*[so_luong];
    map<int, ThanhVien*> danh_sach_thanh_vien_map;
    
    nhap_du_lieu(danh_sach_thanh_vien, so_luong);

    // em chuyen danh sach nay thanh map de no tien hon
    for (int i = 0; i < so_luong; ++i) {
        danh_sach_thanh_vien_map[danh_sach_thanh_vien[i]->id] = danh_sach_thanh_vien[i];
    }
    
    nhap_lich_su_mua_coin(danh_sach_thanh_vien_map, so_thang, so_luong);

    // Xuat tinh trang tai chinh cua he thong
    xuat_tinh_trang_tai_chinh_cua_he_thong(danh_sach_thanh_vien_map);

    // Giai phong bo nho
    for (int i = 0; i < so_luong; ++i) {
        delete danh_sach_thanh_vien[i];
    }
    delete[] danh_sach_thanh_vien;

    return 0;
}
