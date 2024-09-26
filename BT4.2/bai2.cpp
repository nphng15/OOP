#include <iostream>
using namespace std;

class SoPhuc {
private:
    double dThuc;
    double dAo;

public:
    SoPhuc(double re = 0.0, double im = 0.0) : dThuc(re), dAo(im) {}

    void nhap() {
        cout << "Nhap phan thuc: ";
        cin >> dThuc;
        cout << "Nhap phan ao: ";
        cin >> dAo;
    }

    void xuat() const {
        cout << dThuc;
        if (dAo >= 0)
            cout << " + " << dAo << "i";
        else
            cout << " - " << -dAo << "i";
        cout << endl;
    }

    SoPhuc cong(const SoPhuc& sp) const {
        double re = dThuc + sp.dThuc;
        double im = dAo + sp.dAo;
        return SoPhuc(re, im);
    }

    SoPhuc tru(const SoPhuc& sp) const {
        double re = dThuc - sp.dThuc;
        double im = dAo - sp.dAo;
        return SoPhuc(re, im);
    }

    SoPhuc nhan(const SoPhuc& sp) const {
        double re = dThuc * sp.dThuc - dAo * sp.dAo;
        double im = dThuc * sp.dAo + dAo * sp.dThuc;
        return SoPhuc(re, im);
    }

    SoPhuc chia(const SoPhuc& sp) const {
        double denominator = sp.dThuc * sp.dThuc + sp.dAo * sp.dAo;
        double re = (dThuc * sp.dThuc + dAo * sp.dAo) / denominator;
        double im = (dAo * sp.dThuc - dThuc * sp.dAo) / denominator;
        return SoPhuc(re, im);
    }
};

int main() {
    SoPhuc sp1, sp2;

    cout << "Nhap so phuc thu nhat:" << endl;
    sp1.nhap();

    cout << "Nhap so phuc thu hai:" << endl;
    sp2.nhap();

    cout << "Tong hai so phuc: ";
    sp1.cong(sp2).xuat();

    cout << "Hieu hai so phuc: ";
    sp1.tru(sp2).xuat();

    cout << "Tich hai so phuc: ";
    sp1.nhan(sp2).xuat();

    cout << "Thuong hai so phuc: ";
    sp1.chia(sp2).xuat();

    return 0;
}
