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

int main()
{
    Phong *ds[100];
    int n;
    cout << "Nhap so luong phong: ";
    cin >> n;

    int sumB=0;
    int sumP=0;
    int sumD=0;

    for (int i = 0; i < n; i++)
    {
        char type;
        cout << "Nhap loai phong (B/P/D): ";
        cin >> type;
        if (type == 'B')
        {
            ds[i] = new Business();
            ds[i]->Nhap();
            sumB+=ds[i]->DoanhThu();
        }
        else if (type == 'P')
        {
            ds[i] = new Premium();
            ds[i]->Nhap();
            sumP+=ds[i]->DoanhThu();
        }
        else if (type == 'D')
        {
            ds[i] = new Deluxe();
            ds[i]->Nhap();
            sumD+=ds[i]->DoanhThu();
        }
        else
        {
            cout << "Vui long nhap lai loai phong." << endl;
            i--;
        }
    }

    for (int i=0; i<n; i++){
        ds[i]->Xuat();
    }

    cout<<"Loai phong co doanh thu nhieu nhat: ";
    if (sumB > sumD && sumB > sumP){
        cout<<"Business";
    }
    else if (sumD >sumB && sumD>sumP){
        cout<<"Deluxe";
    }
    else cout<<"Premium";
}