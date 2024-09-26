#include "bai3.h"
#include<iostream>
using namespace std;

int main()
{
    DaGiac a;
    a.Nhap();
    cout<<"Nhap khoang cach x,y can tinh tien: ";
    int x,y;
    cin>>x>>y;
    a.Tinhtien(x,y);
    cout<<"Da giac sau khi tinh tien la: ";
    a.Xuat();
    cout<<"Ban muon phong to bao nhieu: ";
    int s;
    cin>>s;
    a.Phongto(s);
    cout<<"Sau khi phong to la: ";
    a.Xuat();
    cout<<"Ban muon xoay bao nhieu do: ";
    int goc;
    cin>>goc;
    a.Quay(goc);
    a.Xuat();
}