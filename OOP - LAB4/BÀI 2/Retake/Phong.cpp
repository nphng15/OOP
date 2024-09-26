#include "Phong.h"
#include <iostream>
#include <vector>
using namespace std;

void Phong::Nhap()
{
    cout << "Nhap so dem: ";
    cin >> SoDem;
}
void Phong::Xuat()
{
    cout << "Doanh thu phong: ";
    cout << DoanhThu();
    cout << endl;
}
int Phong::DoanhThu()
{
    return 0;
};

// -----------------------------------

void Business::Nhap()
{
    Phong::Nhap();
}
void Business::Xuat()
{
    cout << "Doanh thu phong Business: ";
    cout << DoanhThu();
    cout << endl;
}
int Business::DoanhThu()
{
    return SoDem * 300000;
}

// ----------------------------------

void Premium::Nhap()
{
    Phong::Nhap();
    cout << "Nhap phi dich vu: ";
    cin >> PhiDichVu;
}
void Premium::Xuat()
{
    cout << "Doanh thu phong Premium: ";
    cout << DoanhThu();
    cout << endl;
}
int Premium::DoanhThu()
{
    return SoDem * 500000 + PhiDichVu;
}

// -----------------------------------

void Deluxe::Nhap()
{
    Phong::Nhap();
    cout << "Nhap phi dich vu: ";
    cin >> PhiDichVu;
    cout << "Nhap phi phuc vu: ";
    cin >> PhiPhucVu;
}

void Deluxe::Xuat()
{
    cout << "Doanh thu phong Premium: ";
    cout << DoanhThu();
    cout << endl;
}

int Deluxe::DoanhThu()
{
    return SoDem * 750000 + PhiDichVu + PhiPhucVu;
}