#include<iostream>
#include "Phong.h"
using namespace std;

Phong::Phong() {

}
void Phong::Nhap()
{
	cout << "Nhap so dem:";
	cin >> SoDem;
}
int Phong::DoanhThuPhong()
{
	SoDem = getSoDem();
	return 0;
}
void Phong::Xuat()
{
	cout << DoanhThuPhong() << endl;
}
void Business::Nhap()
{
	Phong::Nhap();
}
int Business::DoanhThuPhong() //:Phong.DoanhThuPhong(sodem)
{
	//SoDem = sodem;
	SoDem = getSoDem();
	return SoDem * 300000;
}
void Business::Xuat()
{
	cout << "Danh thu phong loai Business: ";
	cout << DoanhThuPhong() << endl;
}
void Premium::Nhap()
{
	Phong::Nhap();
	cout << "Nhap phi dich vu:";
	cin >> PhiDichvu;
}
int Premium::DoanhThuPhong()
{
	//SoDem = sodem;
	//PhiDichvu = phidichvu;
	return SoDem * 500000 + PhiDichvu;
}
void Premium::Xuat()
{
	cout << "Danh thu phong loai Premium: ";
	cout << Premium::DoanhThuPhong() << endl;
}
void Deluxe::Nhap()
{
	Phong::Nhap();
	cout << "Nhap phi dich vu:";
	cin >> PhiDichvu;
	cout << "Nhap phi phuc vu:";
	cin>> PhiPhucvu;
}
int Deluxe::DoanhThuPhong()
{
	//SoDem = sodem;
	//PhiDichvu = phidichvu;
	//PhiPhucvu = phiphucvu;
	return SoDem * 750000 + PhiDichvu + PhiPhucvu;
}
void Deluxe::Xuat()
{
	cout << "Danh thu phong loai Deluxe: ";
	cout << Deluxe::DoanhThuPhong() << endl;
}