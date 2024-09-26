#include<string>
#include<iostream>
using namespace std;
class HoaDon{
private: 
    string MaVatTu;
    string TenVatTu;
    string LoaiPhieu;
    string NgayLap;
    double dKhoiLuong;
    double dDonGia;
    double dThanhTien;
public:
    HoaDon() {
        MaVatTu = "";
        TenVatTu = "";
        LoaiPhieu = "";
        NgayLap = "";
        dKhoiLuong = 0;
        dDonGia = 0;
        dThanhTien = 0;
    }

    HoaDon(string ma, string ten, string loai, string ngay, double kl, double dg) {
        MaVatTu = ma;
        TenVatTu = ten;
        LoaiPhieu = loai;
        NgayLap = ngay;
        dKhoiLuong = kl;
        dDonGia = dg;
        dThanhTien = kl * dg;
    }

    void nhap();

    void in_hoa_don() {
        cout << "Ma vat tu: " << MaVatTu << endl;
        cout << "Ten vat tu: " << TenVatTu << endl;
        cout << "Loai phieu: " << LoaiPhieu << endl;
        cout << "Ngay lap: " << NgayLap << endl;
        cout << "Khoi luong: " << dKhoiLuong << endl;
        cout << "Don gia: " << dDonGia << endl;
        cout << "Thanh tien: " << dThanhTien << endl;
    }

    bool kiem_tra_loai_phieu() {
        if (LoaiPhieu == "nhap" || LoaiPhieu == "Nhap") {
            return true;
        } else if (LoaiPhieu == "xuat" || LoaiPhieu == "Xuat") {
            return false;
        } else {
            return false;
        }
    }
};

    void HoaDon::nhap() {
        cout << "Nhap ma vat tu: ";
        getline(cin, MaVatTu);
        cout << "Nhap ten vat tu: ";
        getline(cin, TenVatTu);
        cout << "Nhap loai phieu (nhap/xuat): ";
        getline(cin, LoaiPhieu);
        cout << "Nhap ngay lap (dd/mm/yyyy): ";
        getline(cin, NgayLap);
        cout << "Nhap khoi luong: ";
        cin >> dKhoiLuong;
        cout << "Nhap don gia: ";
        cin >> dDonGia;
        dThanhTien = dKhoiLuong * dDonGia;
        cin.ignore();
    }

int main() {
    HoaDon hd1("VT001", "Vat tu A", "Nhap", "01/04/2024", 100, 10);
    hd1.in_hoa_don();

    HoaDon hd2;
    hd2.nhap();
    hd2.in_hoa_don();

    if (hd2.kiem_tra_loai_phieu()) {
        cout << "Hoa don nay la phieu nhap." << endl;
    } else {
        cout << "Hoa don nay la phieu xuat." << endl;
    }

    return 0;
}