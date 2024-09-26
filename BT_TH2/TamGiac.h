#pragma once

class TamGiac{
private:
    double A[2],B[2],C[2];
public:
    void Nhap();
    void Xuat();
    void TinhTien(double dx, double dy);
    void PhongTo(double factor);
    void ThuNho(double factor);
    void Quay(double angle);
};