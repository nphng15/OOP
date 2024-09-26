#include <iostream>
using namespace std;

class KhachHang
{
protected:
    string MaKH, Ten, SDT;
};
class SanPham
{
protected:
    string MS, TieuDe;

public:
    virtual void Nhap()
    {
    }
    virtual void Xuat();
};

class Tranh : public SanPham
{
protected:
    int height, width;
    string TenHS;
};
class CD : public SanPham
{
protected:
    string TenCS, TenDVSX;
};
class HoaDon
{
protected:
    string MaHD;
    KhachHang KH;
    string ngay;
    SanPham *DSSP[100];
    int TongGia;
};

class DanhSach
{
private:
    int n;
    HoaDon *ds[100];
};