#include <iostream>
using namespace std;

class PhanSo {
private:
    int iTuSo;
    int iMauSo;

public:
    PhanSo(int tu = 0, int mau = 1) : iTuSo(tu), iMauSo(mau) {}
  

    void nhap() {
        cout << "Nhap tu so: ";
        cin >> iTuSo;
        cout << "Nhap mau so: ";
        cin >> iMauSo;
    }

    void xuat() const {
        cout << iTuSo << "/" << iMauSo;
    }

    PhanSo cong(const PhanSo& ps) const {
        int tu = iTuSo * ps.iMauSo + ps.iTuSo * iMauSo;
        int mau = iMauSo * ps.iMauSo;
        return PhanSo(tu, mau);
    }

    PhanSo tru(const PhanSo& ps) const {
        int tu = iTuSo * ps.iMauSo - ps.iTuSo * iMauSo;
        int mau = iMauSo * ps.iMauSo;
        return PhanSo(tu, mau);
    }

    PhanSo nhan(const PhanSo& ps) const {
        int tu = iTuSo * ps.iTuSo;
        int mau = iMauSo * ps.iMauSo;
        return PhanSo(tu, mau);
    }

    PhanSo chia(const PhanSo& ps) const {
        int tu = iTuSo * ps.iMauSo;
        int mau = iMauSo * ps.iTuSo;
        return PhanSo(tu, mau);
    }
};

int main() {
    PhanSo ps1, ps2;
    
    cout << "Nhap phan so thu nhat:" << endl;
    ps1.nhap();
    
    cout << "Nhap phan so thu hai:" << endl;
    ps2.nhap();

    cout << "Tong hai phan so: ";
    ps1.cong(ps2).xuat();
    cout << endl;

    cout << "Hieu hai phan so: ";
    ps1.tru(ps2).xuat();
    cout << endl;

    cout << "Tich hai phan so: ";
    ps1.nhan(ps2).xuat();
    cout << endl;

    cout << "Thuong hai phan so: ";
    ps1.chia(ps2).xuat();
    cout << endl;

    return 0;
}
