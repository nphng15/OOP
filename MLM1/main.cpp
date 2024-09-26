#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class ThanhVien
{
public:
    int id;
    string ten;
    int loai;

    ThanhVien(int ma_so, string ten_thanh_vien, int loai_thanh_vien) : id(ma_so), ten(ten_thanh_vien), loai(loai_thanh_vien) {}

    virtual void inThongTin() const
    {
        cout << "ID: " << id << ", Ten: " << ten << ", Loai: " << loai << endl;
    }
};

class GiamDoc : public ThanhVien
{
public:
    double tong_thu_nhap;

    GiamDoc(string ten) : ThanhVien(0, ten, 1), tong_thu_nhap(0) {}

    void inThongTin() const override
    {
        cout << "ID: " << id << ", Ten: " << ten << ", Loai: " << loai << ", Tong thu nhap: " << tong_thu_nhap << endl;
    }
};

class DaiLy : public ThanhVien
{
public:
    int cap;
    double ty_le_hoa_hong;
    double coin_dong_gop;

    DaiLy(int ma_so, string ten, int cap_bac) : ThanhVien(ma_so, ten, 2), cap(cap_bac), coin_dong_gop(0)
    {
        ty_le_hoa_hong = 5 + cap * 3;
    }

    void inThongTin() const override
    {
        cout << "ID: " << id << ", Ten: " << ten << ", Loai: " << loai << ", Cap: " << cap << ", Ty le hoa hong: " << ty_le_hoa_hong << "%" << endl;
    }
};

class NhaDauTu : public ThanhVien
{
public:
    int id_dai_ly;
    double coin_dau_tu;
    double ty_le_lai_suat;
    int so_thang_dau_tu;

    NhaDauTu(int ma_so, string ten, int id_dai_ly_quan_ly, double coin) : ThanhVien(ma_so, ten, 3), id_dai_ly(id_dai_ly_quan_ly), coin_dau_tu(coin), so_thang_dau_tu(0)
    {
        if (coin_dau_tu >= 201)
        {
            ty_le_lai_suat = 15;
        }
        else if (coin_dau_tu >= 101)
        {
            ty_le_lai_suat = 12;
        }
        else
        {
            ty_le_lai_suat = 10;
        }
    }

    void inThongTin() const override
    {
        cout << "ID: " << id << ", Ten: " << ten << ", Loai: " << loai << ", ID Dai ly: " << id_dai_ly << ", Coin dau tu: " << coin_dau_tu << ", Ty le lai suat: " << ty_le_lai_suat << "%" << endl;
    }
};

void nhap_du_lieu(ThanhVien *danh_sach_thanh_vien[100], int so_luong)
{
    for (int i = 0; i < so_luong; ++i)
    {
        int loai_thanh_vien;
        int id;
        string ten;

        cin >> id >> loai_thanh_vien >> ten;

        if (loai_thanh_vien == 1)
        {
            danh_sach_thanh_vien[i] = new GiamDoc(ten);
        }
        else if (loai_thanh_vien == 2)
        {
            int cap_bac;
            cin >> cap_bac;
            danh_sach_thanh_vien[i] = new DaiLy(id, ten, cap_bac);
        }
        else if (loai_thanh_vien == 3)
        {
            int id_dai_ly_quan_ly;
            double coin_dau_tu;
            cin >> id_dai_ly_quan_ly >> coin_dau_tu;
            danh_sach_thanh_vien[i] = new NhaDauTu(id, ten, id_dai_ly_quan_ly, coin_dau_tu);
        }
        else
        {
            cout << "Loai thanh vien khong hop le." << endl;
            --i; // Nhap lai thanh vien
        }
    }
}

int main()
{
    int so_luong, so_thang;
    ThanhVien *danh_sach_thanh_vien[100];
    // Nhap thong tin
    cout << "Nhap so luong cac ca the: ";
    cin >> so_luong;
    cout << "Nhap so thang: ";
    cin >> so_thang;

    // ThanhVien** danh_sach_thanh_vien = new ThanhVien*[so_luong];

    nhap_du_lieu(danh_sach_thanh_vien, so_luong);

    // Debug output de kiem tra du lieu
    for (int i = 0; i < so_luong; ++i)
    {
        danh_sach_thanh_vien[i]->inThongTin();
    }

    return 0;
}
