#include <iostream>
#include <string>

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
    ~NhanVien() {}
    virtual void CalcSalary() = 0;
    double getSalary() { return dSalary; }
    string getName() { return sName; }
};

class NV_VanPhong : public NhanVien
{
private:
    int WorkDays;

public:
    NV_VanPhong(string sName, string sDate, int WorkDays) : NhanVien(sName, sDate), WorkDays(WorkDays) {}
    void CalcSalary() override { dSalary = WorkDays * 100000; }
};

class NV_SanXuat : public NhanVien
{
private:
    int iLuongCanBan;
    int iSoSanPham;

public:
    NV_SanXuat(string sName, string sDate, int iLuongCanBan, int iSoSanPham)
        : NhanVien(sName, sDate), iLuongCanBan(iLuongCanBan), iSoSanPham(iSoSanPham) {}
    void CalcSalary() override { dSalary = iLuongCanBan + iSoSanPham * 5000; }
};
int main()
{
    NhanVien *nv1 = new NV_VanPhong("Nguyen Van A", "01/01/2000", 20);
    NhanVien *nv2 = new NV_SanXuat("Nguyen Van B", "01/01/2000", 1000000, 100);
    nv1->CalcSalary();
    nv2->CalcSalary();
    cout << nv1->getName() << " " << nv1->getSalary() << endl;
    cout << nv2->getName() << " " << nv2->getSalary() << endl;
    return 1;

}