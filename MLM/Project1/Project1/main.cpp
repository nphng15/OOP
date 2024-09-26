#include <iostream>
#include <string>
#include <cmath>
#include <map>
#include <iomanip>
#include "ThanhVien.h"

using namespace std;

void nhap_du_lieu(ThanhVien** danh_sach_thanh_vien, int so_luong) {
    for (int i = 0; i < so_luong; ++i) {
        int loai_thanh_vien;
        int id;
        string ten;

        cin >> id >> loai_thanh_vien >> ten;

        if (loai_thanh_vien == 1) {
            danh_sach_thanh_vien[i] = new GiamDoc(id, ten);
        }
        else if (loai_thanh_vien == 2) {
            int cap_bac;
            cin >> cap_bac;
            danh_sach_thanh_vien[i] = new DaiLy(id, ten, cap_bac);
        }
        else if (loai_thanh_vien == 3) {
            int id_dai_ly_quan_ly;
            cin >> id_dai_ly_quan_ly;
            danh_sach_thanh_vien[i] = new NhaDauTu(id, ten, id_dai_ly_quan_ly);
        }
        else {
            cout << "Loai thanh vien khong hop le." << endl;
            --i;
        }
    }
}

void nhap_lich_su_mua_coin(map<int, ThanhVien*>& danh_sach_thanh_vien, int so_thang, int so_luong)
{
    for (int i = 0; i < so_thang; ++i)
    {
        for (int j = 1; j < so_luong; j++)
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



    cin >> so_luong;

    cin >> so_thang;

    ThanhVien** danh_sach_thanh_vien = new ThanhVien * [so_luong];
    map<int, ThanhVien*> danh_sach_thanh_vien_map;

    nhap_du_lieu(danh_sach_thanh_vien, so_luong);

 
    for (int i = 0; i < so_luong; ++i) {
        danh_sach_thanh_vien_map[danh_sach_thanh_vien[i]->id] = danh_sach_thanh_vien[i];
    }

    nhap_lich_su_mua_coin(danh_sach_thanh_vien_map, so_thang, so_luong);

    // Xuat 
    xuat_tinh_trang_tai_chinh_cua_he_thong(danh_sach_thanh_vien_map);




    for (int i = 0; i < so_luong; ++i) {
        delete danh_sach_thanh_vien[i];
    }
    delete[] danh_sach_thanh_vien;

    return 0;
}