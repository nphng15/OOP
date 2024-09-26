#pragma once
#include <iostream>
#include <string>
using namespace std;

class NhanVien
{
protected:
    int MSNV;
    string name;
    int LuongCB;

public:
    NhanVien() : MSNV(0), name(""), LuongCB(0) {}
    virtual ~NhanVien() {}

    virtual void Nhap() = 0;
    void Xuat();
    virtual int TienThuong() = 0;
};

class QuanLy : public NhanVien
{
private:
    int TLT;

public:
    QuanLy() {}
    ~QuanLy() {}

    void Nhap() override;
    int TienThuong();
};

class KySu : public NhanVien
{
private:
    int WorkHours;

public:
    KySu() {}
    ~KySu() {}

    void Nhap() override;
    int TienThuong();
};