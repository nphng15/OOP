#ifndef SOPHUC_H
#define SOPHUC_H
#pragma once
class SoPhuc {
private:
    float iThuc;
    float iAo;

public:
    void Nhap();
    void Xuat();
    SoPhuc Tong(SoPhuc sp1, SoPhuc sp2);
    SoPhuc Hieu(SoPhuc sp1, SoPhuc sp2);
    SoPhuc Tich(SoPhuc sp1, SoPhuc sp2);
    SoPhuc Thuong(SoPhuc sp1, SoPhuc sp2);
};

#endif

