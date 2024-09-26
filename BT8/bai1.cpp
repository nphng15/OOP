#include <iostream>
#include <string>
#include <vector>
using namespace std;

class NhanVien
{
protected:
    string sName;
    string sDate;
    double dSalary;

public:
    NhanVien() : dSalary(0) {}
    NhanVien(string sName, string sDate) : sName(sName), sDate(sDate), dSalary(0) {}
    virtual ~NhanVien() {}

    virtual void CalcSalary() = 0;
    virtual string getLoaiNhanVien() const = 0;

    double getSalary() const { return dSalary; }
    string getName() const { return sName; }
};

class NV_VanPhong : public NhanVien
{
private:
    int WorkDays;

public:
    NV_VanPhong(string sName, string sDate, int WorkDays)
        : NhanVien(sName, sDate), WorkDays(WorkDays) {}

    void CalcSalary() override
    {
        dSalary = WorkDays * 100000;
    }

    string getLoaiNhanVien() const override { return "Van phong"; }
};

class NV_SanXuat : public NhanVien
{
private:
    double dLuongCanBan;
    int iSoSanPham;

public:
    NV_SanXuat(string sName, string sDate, double dLuongCanBan, int iSoSanPham)
        : NhanVien(sName, sDate), dLuongCanBan(dLuongCanBan), iSoSanPham(iSoSanPham) {}

    void CalcSalary() override
    {
        dSalary = dLuongCanBan + iSoSanPham * 5000;
    }

    string getLoaiNhanVien() const override { return "San xuat"; }
};

int main()
{
    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;

    vector<NhanVien *> danhSachNhanVien;

    // Nhập thông tin nhân viên
    for (int i = 0; i < n; ++i)
    {
        char loaiNhanVien;
        string hoTen, ngaySinh;
        cout << "Nhap loai nhan vien (V - Van phong, S - San xuat): ";
        cin >> loaiNhanVien;
        cout << "Nhap ho ten nhan vien: ";
        cin.ignore();
        getline(cin, hoTen);
        cout << "Nhap ngay sinh (dd/mm/yyyy): ";
        getline(cin, ngaySinh);

        if (loaiNhanVien == 'V')
        {
            int soNgayLamViec;
            cout << "Nhap so ngay lam viec: ";
            cin >> soNgayLamViec;
            danhSachNhanVien.push_back(new NV_VanPhong(hoTen, ngaySinh, soNgayLamViec));
        }
        else if (loaiNhanVien == 'S')
        {
            double luongCanBan;
            int soSanPham;
            cout << "Nhap luong can ban: ";
            cin >> luongCanBan;
            cout << "Nhap so san pham: ";
            cin >> soSanPham;
            danhSachNhanVien.push_back(new NV_SanXuat(hoTen, ngaySinh, luongCanBan, soSanPham));
        }
        else
        {
            cout << "Loai nhan vien khong hop le!" << endl;
            --i; // nhap lai
        }
    }

    // Tính lương cho các nhân viên
    for (auto nv : danhSachNhanVien)
    {
        nv->CalcSalary();
    }

    // Xuất thông tin nhân viên
    cout << "\nThong tin nhan vien:" << endl;
    for (auto nv : danhSachNhanVien)
    {
        cout << "Ho ten: " << nv->getName() << endl;
        cout << "Loai nhan vien: " << nv->getLoaiNhanVien() << endl;
        cout << "Luong: " << nv->getSalary() << endl;
        cout << "-------------------" << endl;
    }

    // Giải phóng bộ nhớ
    for (auto nv : danhSachNhanVien)
    {
        delete nv;
    }

    return 0;
}
