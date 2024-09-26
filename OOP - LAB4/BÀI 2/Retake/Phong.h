#pragma once

class Phong
{
protected:
    int SoDem;
    int PhiDichVu, PhiPhucVu;

public:
    Phong() {}
    ~Phong() {}
    virtual void Nhap();
    virtual void Xuat();
    virtual int DoanhThu();
};

class Business : public Phong
{
public:
    Business() {}
    ~Business() {}
    void Nhap();
    void Xuat();
    int DoanhThu();
};

class Premium : public Phong
{
public:
    Premium() {}
    ~Premium() {}
    void Nhap();
    void Xuat();
    int DoanhThu();
};

class Deluxe : public Phong
{
public:
    Deluxe() {}
    ~Deluxe() {}
    void Nhap();
    void Xuat();
    int DoanhThu();
};